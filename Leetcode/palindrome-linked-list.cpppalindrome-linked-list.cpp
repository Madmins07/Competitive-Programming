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
        ListNode* p =head;
        vector<int> ans;
        while(p!=nullptr){
            ans.push_back(p->val);
            p=p->next;
        }
        const int n = ans.size();
        for(int i=0;i<n/2;i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
