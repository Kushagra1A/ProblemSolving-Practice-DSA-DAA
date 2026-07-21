/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        Node* dummyn = new Node(-1);
        Node* temp = dummyn;
        
        while(temp1 != nullptr && temp2 != nullptr){
            if(temp1->data < temp2->data){
                temp->next = temp1;
                temp = temp1;
                temp1 = temp1->next;
            }
            else{
                temp->next = temp2;
                temp = temp2;
                temp2 = temp2->next;
            }
        }
        
        while(temp1 != nullptr){
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
        
        while(temp2 != nullptr){
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
        
        return dummyn->next;
    }
};