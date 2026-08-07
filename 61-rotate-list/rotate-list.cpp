class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        k = k % length;
        if (k == 0) return head;

        for (int i = 0; i < k; i++) {
            ListNode* prev = nullptr;
            ListNode* curr = head;

            while (curr->next != nullptr) {
                prev = curr;
                curr = curr->next;
            }

            prev->next = nullptr;
            curr->next = head;   
            head = curr;      
        }

        return head;
    }
};