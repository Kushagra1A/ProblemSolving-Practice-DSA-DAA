/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        
        if(k == 0){
            return head;
        }
        
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        
        temp->next = head; //create a cycle
        
        while(k > 1){
            head = head->next;
            k--;
        }
        Node* newhead = head->next;
        head->next = nullptr;
        
        return newhead;
    }
};