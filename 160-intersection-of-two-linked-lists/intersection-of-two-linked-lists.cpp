/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tempA = headA;
        int sizeA = 0;

        while (tempA != nullptr) {
            tempA = tempA->next;
            sizeA++;
        }

        ListNode* tempB = headB;
        int sizeB = 0;

        while (tempB != nullptr) {
            tempB = tempB->next;
            sizeB++;
        }

        int skip = abs(sizeA - sizeB);

        ListNode* currA = headA;
        ListNode* currB = headB;

        if (sizeA > sizeB) {
            while (skip--) {
                currA = currA->next;
            }
        } else {
            while (skip--) {
                currB = currB->next;
            }
        }

        while (currA != nullptr && currB != nullptr) {
            if (currA == currB) {
                return currA;
            }
            currA = currA->next;
            currB = currB->next;
        }

        return nullptr;
    }
};