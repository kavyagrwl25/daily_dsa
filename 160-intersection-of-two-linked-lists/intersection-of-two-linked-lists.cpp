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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        ListNode *a = headA;
        ListNode *b = headB;
        while(true){
            if(a == b) return a;
            if(a == NULL){
                a = headB;
            }else{
                a = a->next; 
            }
            if(b == NULL){
                b = headA;
            }else{
                b = b->next;
            }
        }
        return NULL;
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