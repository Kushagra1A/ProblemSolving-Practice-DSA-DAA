/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node*dnode = new Node(-1);
        Node* temp = head;
        
        int count = 1;
        
        while(temp->next != nullptr){
            temp = temp->next;
            count++;
        }
        
        if(count < k){
            return -1;
        }
        if(count == k){
            return head->data;
        }
        
        
        dnode->next = head;
        Node* fast = dnode;
        Node* slow = dnode;
        
        while(k != 0){
            fast = fast->next;
            k--;
        }
        
        while(fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow->next->data;
    }
};