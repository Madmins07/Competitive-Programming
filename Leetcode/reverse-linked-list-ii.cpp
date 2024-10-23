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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 0;
        ListNode* temp =head;
        vector<int> ans;
        int i=1;
        while(temp!=nullptr){
            count++;
            if(i>=left && i<=right) ans.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        const int n = ans.size();
        temp= head;
        int x=0;
        for(int i=1;i<=count;i++){
            if(i>=left && i<=right){
                temp->val = ans[n-x-1];
                x++;
            }
            temp=temp->next;
        }
        return head;
    }
};
