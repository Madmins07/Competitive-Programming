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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode * temp = head;
        vector<int> ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        const int cnt = count;
        if(count==0) return head;
        count = k % count;
        if(count==0){
            return head;
        }
        int cut = ans[cnt-count-1];
        temp=head;
        int i=0;
        while(i!=cnt-count-1){
            i++;
            temp=temp->next;
        }
        ListNode * temp1 = temp->next;
        ListNode * temp2 =temp1;
        temp->next=nullptr;
        while(temp1->next!=nullptr){
            temp1=temp1->next;
        }
        temp1->next=head;
        head=temp2;
        return head;
    }
};
