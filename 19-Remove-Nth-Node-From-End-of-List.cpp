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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 1;

        if(temp->next == nullptr) return nullptr;

        while(temp->next != nullptr){
            temp = temp->next;
            count++;
        }

        if(count == n){
            return head->next;
        }

        temp = head;
        int delete_front = count - n;

        while(delete_front > 1){
            temp = temp->next;
            delete_front--;        
        }

        temp->next = temp->next->next;

        return head;
    }
};