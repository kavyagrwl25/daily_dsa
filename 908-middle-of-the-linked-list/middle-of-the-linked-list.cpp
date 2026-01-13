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
    ListNode* middleNode(ListNode* head) {
        int counter = 1;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            counter++;
        }

        int i = (counter / 2);

        for (int x = 0; x < i; x++) {
            head = head->next;
        }
        return head;
    }
};