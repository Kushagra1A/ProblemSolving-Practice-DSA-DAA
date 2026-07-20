/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp = head;
        Node* newnode = new Node(x);
        
        if(head == nullptr) return newnode;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        
        temp->next = newnode;
        
        return head;
    }
};