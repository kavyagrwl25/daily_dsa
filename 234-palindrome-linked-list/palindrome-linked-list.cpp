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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> arr2;
        arr2 = arr;
        reverse(arr.begin(), arr.end());
        if(arr == arr2) return true;
        return false;
    }
};