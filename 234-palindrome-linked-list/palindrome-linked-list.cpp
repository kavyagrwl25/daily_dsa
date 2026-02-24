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
    ListNode* reverse(ListNode* head) {
        if (head == NULL)
            return NULL;
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* front;
        while (temp) {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverse(slow->next);
        
        ListNode* first = head;
        ListNode* second = newHead;
        while (second != NULL && first != NULL) {
            if (second->val != first->val) {
                reverse(newHead);
                return false;
            }
            second = second->next;
            first = first->next;
        }
        reverse(newHead);
        return true;
    }
};