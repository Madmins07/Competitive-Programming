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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
        ListNode* temp = head;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        const int n = ans.size();
        temp = head;
        int pos=0;
        while(temp!=nullptr){
            if(pos==k-1){
                temp->val=ans[n-k];
            }else if(pos==(n-k)){
                temp->val=ans[k-1];
            }
            temp=temp->next;
            pos++;
        }
        return head;
    }
};swapping-nodes-in-a-linked-list/
