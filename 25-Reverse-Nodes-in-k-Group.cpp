/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findKth(ListNode* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }   
    
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    
    ListNode *reverseKGroup(ListNode *head, int k) {
        // code here
        ListNode* temp = head;
        ListNode* prevLast = nullptr;
        
        while(temp != nullptr){
            ListNode* kthnode = findKth(temp, k);
            if(kthnode == nullptr){
                if(prevLast) {
                    prevLast->next = temp;
                }
                break;
            }
            
            ListNode*newnode = kthnode->next;
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