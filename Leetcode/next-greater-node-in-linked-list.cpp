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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        const int n = ans.size();
        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = i + 1; j < n; j++) {
                if (ans[j] > ans[i]) {
                    ans[i] = ans[j];
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans[i] = 0;
        }
        ans[n - 1] = 0;
        return ans;
    }
};
