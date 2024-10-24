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
    void reorderList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        const int n = ans.size();
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                temp->val = ans[l];
                l++;
            } else {
                temp->val = ans[r];
                r--;
            }
            temp = temp->next;
        }
    }
};
