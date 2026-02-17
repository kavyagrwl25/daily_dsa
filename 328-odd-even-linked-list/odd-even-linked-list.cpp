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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* tempO = head;
        ListNode* tempE = head->next;
        ListNode* linkage = head->next;
        
        while(tempE != NULL && tempE->next != NULL){
            tempO->next = tempO->next->next;
            tempE->next = tempE->next->next;
            tempO = tempO->next;
            tempE = tempE->next;
        }
        tempO->next = linkage;
        return head;
    }
};

/* 

if (!head) return head;

        vector<int> arr;
        ListNode* temp = head;
        int count = 1;
        while (temp) {
            if (count % 2 != 0)
                arr.push_back(temp->val);
            count++;
            temp = temp->next;
        }
        temp = head;
        count = 1;
        while (temp) {
            if (count % 2 == 0) {
                arr.push_back(temp->val);
            }
            count++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < arr.size(); i++) {
            temp->val = arr[i];
            temp = temp->next;
        }
        return head; */