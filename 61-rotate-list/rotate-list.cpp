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
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        ListNode* tail = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        k = k % count;
        temp = head;

        while (k--) {
            while (true) {

                if (tail->next->next == NULL) {

                    ListNode* last = tail->next; // store last node
                    tail->next = NULL;           // remove last node
                    last->next = temp;           // attach in front
                    temp = last;                 // update head
                    break;
                }
                tail = tail->next;
            }
            tail = temp;
        }
        return temp;
    }
};