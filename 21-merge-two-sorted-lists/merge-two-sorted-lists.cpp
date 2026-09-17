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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* dummyNode = new ListNode(1);
        ListNode* temp = dummyNode;
        while(a != nullptr && b != nullptr) {
            if(a->val <= b->val){
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }
            else if(a->val >= b->val){
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
        }
        if(a!=nullptr) temp->next = a;
        if(b!=nullptr) temp->next = b;
        return dummyNode->next;
    }
};