/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node* temp = head;
        int count = 1;
        while(temp->next != nullptr){
            temp=temp->next;
            count++;
        }
        
        count = ceil(count/2);
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* prev = nullptr;
        while(slow != nullptr){
            Node* newn = slow->next;
            slow->next = prev;
            prev = slow;
            slow = newn;
        }
        
        temp = head;
        //now prev is at our last index and temp is at our first index
        while(count != 0){
            if(temp->data != prev->data){
                return false;
            }
            count--;
            temp=temp->next;
            prev=prev->next;
        }
        
        return true;
    }
};