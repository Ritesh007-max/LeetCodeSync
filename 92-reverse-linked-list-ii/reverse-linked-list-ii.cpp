class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head->next == nullptr)
            return head;

        ListNode *leftNode = nullptr, *rightNode = nullptr;
        ListNode *prevLeft = nullptr;

        ListNode *curr = head, *prev = nullptr;
        int pos = 1;

        while (curr != nullptr && pos <= right) {
            if (pos == left) {
                leftNode = curr;
                prevLeft = prev;
            }
            if (pos == right)
                rightNode = curr;

            prev = curr;
            curr = curr->next;
            pos++;
        }

        ListNode* afterRight = rightNode->next;

        prev = nullptr;
        curr = leftNode;

        for (int i = left; i <= right; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        if (prevLeft)
            prevLeft->next = rightNode;
        else
            head = rightNode;

        leftNode->next = afterRight;

        return head;
    }
};