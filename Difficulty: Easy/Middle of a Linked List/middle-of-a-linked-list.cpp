/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        int count = 1;
        Node* temp = head;
        
        while(temp->next != nullptr){
            temp = temp->next;
            count++;
        }
        temp = head;
     
        int index = floor(count/2) + 1;
        
        count = 1;
        while(temp != nullptr){
            if(count == index){
                return temp->data;
            }
            temp = temp->next;
            count++;
        }
    }
};