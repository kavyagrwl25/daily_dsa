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
        if (!headA || !headB)
            return NULL;
        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
            a = (a == NULL) ? headB : a->next;
            b = (b == NULL) ? headA : b->next;
        }

        return a;
    }
};

/* unordered_map<ListNode*, int> mp;
        ListNode* temp = headA;
        while(temp != NULL){
            mp[temp] = 1;
            temp = temp->next;
        }
        temp = headB;
        while(temp != NULL){
            if(mp.find(temp) != mp.end()){
                return temp;
            }
            temp = temp->next;
        }
        return NULL; */