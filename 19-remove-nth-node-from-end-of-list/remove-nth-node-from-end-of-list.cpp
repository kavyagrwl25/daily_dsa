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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return nullptr;
        ListNode* f = head;
        ListNode* s = head;
        for(int i=0; i<n; i++){
            f = f->next;
        }
        if(f == NULL) return head->next;
        while(f->next != nullptr){
            f = f->next;
            s = s->next;
        }
        
        ListNode* delnode = s->next;
        s->next = s->next->next;
        delete(delnode);
        return head;
    }
};

/* int cnt = 0;
        ListNode* temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        if (n == cnt) {
            return head->next;
        }
        int ans = (cnt - n) - 1;
        temp = head;
        while (ans) {
            temp = temp->next;
            ans--;
        }
        temp->next = temp->next->next;
        return head; */