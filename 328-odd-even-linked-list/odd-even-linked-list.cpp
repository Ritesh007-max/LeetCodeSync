class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        ListNode* tail = nullptr;
    if(head==NULL || head->next==NULL ||head->next->next==NULL){
        return head;
    }
        while (temp != nullptr) {
            if (temp->next == nullptr) {
                tail = temp;
            }
            temp = temp->next;
            size++;
        }

        int count = 1;
        temp = head;

        while (temp->next != nullptr && count < size) {
            if (count % 2 != 0) {
                ListNode* dummy = temp->next;

                temp->next = temp->next->next;
                dummy->next = nullptr;
                tail->next = dummy;
                tail = dummy;

            } else {
                temp = temp->next;
            }
            count++;
        }

        return head;
    }
};