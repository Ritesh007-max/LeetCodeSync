/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        
        Node* temp = head;

        while(temp != nullptr) {

            if(temp->child != nullptr) {
                Node* childTemp = temp->child;

                while(childTemp->next != nullptr) {
                    childTemp = childTemp->next;
                }

                childTemp->next = temp->next;
                if(temp->next != nullptr) {
                    temp->next->prev = childTemp;
                }

                temp->next = temp->child;
                temp->child->prev = temp;

                temp->child = nullptr;
            }

            temp = temp->next;

        }

        return head;

    }
};