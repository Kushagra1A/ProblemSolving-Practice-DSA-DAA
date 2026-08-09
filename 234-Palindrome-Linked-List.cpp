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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count = 1;
        while(temp->next != nullptr){
            temp=temp->next;
            count++;
        }
        
        count = ceil(count/2);
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* prev = nullptr;
        while(slow != nullptr){
            ListNode* newn = slow->next;
            slow->next = prev;
            prev = slow;
            slow = newn;
        }
        
        temp = head;
        //now prev is at our last index and temp is at our first index
        while(count != 0){
            if(temp->val != prev->val){
                return false;
            }
            count--;
            temp=temp->next;
            prev=prev->next;
        }
        
        return true;
    }
};