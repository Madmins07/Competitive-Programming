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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        ListNode * p = head->next;
        int sum=0,flag=0;
        while(p!=NULL){
            if(p->val==0){
                flag=1;
            }else if(flag!=1){
                sum+=p->val;
            }
            if(flag==1){
                ans.push_back(sum);
                sum=0;
                flag=0;
            }
            p=p->next;
        }
        ListNode * head1 = nullptr;const int n =ans.size();ListNode * x;
        for(int i=0;i<n;i++){
            ListNode * temp = new ListNode(ans[i]);
            if(head1==nullptr){
                head1=temp;
                x=head1;
            }else{
                x->next = temp;
                x=x->next;
            }
        }
        return head1;

    }
};
