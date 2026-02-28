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

    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *front;
        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next ==  NULL) return true;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* newNode = reverse(slow->next);
        ListNode *first = head;
        ListNode *second = newNode;
        while(second != NULL){
            if(second->val != first->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
    return true;
    }
};