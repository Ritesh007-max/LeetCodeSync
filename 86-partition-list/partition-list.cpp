class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        ListNode* tail = head;
        int count = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            count++;
        }

        ListNode* curr = head;
        while (count > 0) {
            count--;
            if (curr->val >= x && curr != tail) {
                prev->next = curr->next;
                
                tail->next = curr;
                tail = curr;
                
                curr = prev->next;
                tail->next = nullptr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};