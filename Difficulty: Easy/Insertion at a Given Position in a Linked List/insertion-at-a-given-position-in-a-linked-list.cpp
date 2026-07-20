/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        if(pos == 1){
            Node* newn = new Node(val);
            newn->next = head;
            return newn;
        }
        
        int count = 1;
        
        Node* temp = head;
        while(temp != nullptr){
            if(count == pos-1){
                Node* newn = new Node(val);
                newn->next = temp->next;
                temp->next = newn;
                break;
            }
            temp = temp->next;
            count++;
        }
        
        return head;
    }
};