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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr) return head;

        if(k == 0) return head;

        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        temp = head;
        k = k % count;
        if (k == 0) return head; // If k is a multiple of length, list doesn't change!

        // 3. Right rotation by k equals Left rotation by (count - k)
        k = count - k;

        // 4. Find the tail and create a cycle
        ListNode* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = head; // create a cycle

        // 5. Move to the split point
        while (k > 1) {
            head = head->next;
            k--;
        }

        // 6. Break cycle and return new head
        ListNode* newhead = head->next;
        head->next = nullptr;

        return newhead;
    }
};