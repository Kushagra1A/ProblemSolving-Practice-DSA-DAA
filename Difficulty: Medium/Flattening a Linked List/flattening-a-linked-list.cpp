/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
    Node* flatten(Node* head) {
        // code here
        Node* temp = head;
        Node* dummy = head;
        
        while(dummy != nullptr){
            while(temp->bottom != nullptr){
                temp = temp->bottom;
            }
            temp->bottom = dummy->next;
            dummy = dummy->next;
            temp = dummy;
        }
        
        vector<int>ans;
        temp = head;
        while(temp != nullptr){
            ans.push_back(temp->data);
            temp = temp->bottom;
        }
        
        sort(ans.begin(), ans.end());
        
        Node* first = new Node(ans[0]);
        Node* head2 = first;
        
        for(int i = 1; i < ans.size(); i++){
            Node* sec = new Node(ans[i]);
            first->bottom = sec;
            first = first->bottom;
        }
        
        return head2;
    }
};