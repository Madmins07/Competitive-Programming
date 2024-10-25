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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return head;
        map<int, int> ans;
        ListNode* temp = head;
        vector<int> keys;
        while (temp) {
            ans[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while (temp) {
            if (ans[temp->val] == 1) {
                keys.push_back(temp->val);
            }
            temp = temp->next;
        }
        sort(keys.begin(), keys.end());
        const int n = keys.size();
        temp = head;
        for (int i = 0; i < n; i++) {
            temp->val = keys[i];
            if (i < n - 1)
                temp = temp->next;
        }
        temp->next = nullptr;
        if(ans[temp->val]>1) return nullptr;
        return head;
    }
};
