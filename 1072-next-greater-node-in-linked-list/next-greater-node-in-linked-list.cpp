class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* runner = curr->next;
            int nextGreater = 0;
            int originalVal = curr->val;

            while (runner != nullptr) {
                if (runner->val > originalVal) {
                    nextGreater = runner->val;
                    break;
                }
                runner = runner->next;
            }

            result.push_back(nextGreater);
            curr = curr->next;
        }

        return result;
    }
};