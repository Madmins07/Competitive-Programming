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
        vector<int> ans;
        ListNode * temp = head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        const int n = ans.size();
        for(int i=0;i<n;i+=2){
            temp->val=ans[i];
            temp=temp->next;
        }
        for(int i=1;i<n;i+=2){
            temp->val=ans[i];
            temp=temp->next;
        }
        return head;
    }
};
