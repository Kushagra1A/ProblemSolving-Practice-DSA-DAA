/*
class Node {
public:
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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node* temp1 = head1;
        Node* temp2 = head2;
        int count1 = 1;
        int count2 = 1;
        
        while(temp1->next != nullptr){
            count1++;
            temp1 = temp1->next;
        }
        while(temp2->next != nullptr){
            count2++;
            temp2 = temp2->next;
        }
        
        temp1=head1;
        temp2=head2;
        
        if(count2 > count1){
            
            int diff = count2-count1;
            while(diff > 0){
                diff--;
                temp2 = temp2->next;
            }
            
        }
        else{
            
            int diff = count1-count2;
            while(diff > 0){
                diff--;
                temp1 = temp1->next;
            }
            
        }
        
        while(temp1 != nullptr){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        
    }
};