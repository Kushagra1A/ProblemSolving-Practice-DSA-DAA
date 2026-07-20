/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* temp = head;
        Node* newn = nullptr;
        Node* prev = nullptr;
        
        while(temp != nullptr){
            newn = temp->next;
            temp->next = prev;
            prev = temp;
            temp = newn;
        }
        
        return prev;
    }
};