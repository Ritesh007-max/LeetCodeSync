class Solution {
public:
    ListNode* cloneList(ListNode* head) {
        if (!head) return nullptr;
        
        ListNode* newHead = new ListNode(head->val);
        ListNode* currOld = head->next;
        ListNode* currNew = newHead;
        
        while (currOld != nullptr) {
            currNew->next = new ListNode(currOld->val);
            currNew = currNew->next;
            currOld = currOld->next;
        }
        
        return newHead;
    }

    ListNode* reverseList(ListNode* head) {
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

    bool isPalindrome(ListNode* head) {
        ListNode* copiedHead = cloneList(head);
        ListNode* reversedHead = reverseList(copiedHead);
        
        ListNode* ptr1 = head;
        ListNode* ptr2 = reversedHead;
        
        while (ptr1 != nullptr && ptr2 != nullptr) {
            if (ptr1->val != ptr2->val) {
                return false;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        return true;
    }
};