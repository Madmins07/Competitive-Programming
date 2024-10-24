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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode * temp = head;
        ListNode * prev = head;
        if(head==nullptr) return head;

        map<int,int> ans;
        for(auto itr : nums){
            ans[itr]++;
        }
        if(temp->next==nullptr && ans[temp->val]>=1) return nullptr;
        temp=temp->next;
        while(temp!=nullptr){
            if(ans[prev->val] && prev==head){
                head=head->next;
                prev=prev->next;
            }else if(ans[temp->val]){
                prev->next=temp->next;
            }else{
                prev=prev->next;
            }
            temp = temp->next;
        }
        return head;
    }
};
