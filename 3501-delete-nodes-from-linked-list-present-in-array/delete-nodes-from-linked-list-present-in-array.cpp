class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        while (head != nullptr && numSet.count(head->val)) {
            head = head->next;
        }

        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (numSet.count(temp->next->val)) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};