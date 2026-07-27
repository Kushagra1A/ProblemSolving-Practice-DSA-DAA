/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    
    Node* findKth(Node* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }   
    
    Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* temp = head;
        Node* prevLast = nullptr;
        
        while(temp != nullptr){
            Node* kthnode = findKth(temp, k);
            if(kthnode == nullptr){
                Node* reversedTail = reverse(temp);
                if(prevLast) {
                    prevLast->next = reversedTail;
                } else {
                    head = reversedTail;
                }
                break;
            }
            
            Node*newnode = kthnode->next;
            kthnode->next = nullptr;
            reverse(temp);
            if(temp == head){
                head = kthnode;
            }
            else{
                prevLast->next = kthnode;
            }    
            prevLast = temp;
            temp = newnode;
        }
        
        return head;
    }
};