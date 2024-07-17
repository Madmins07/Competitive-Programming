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
        ListNode * p = head;
        set<int> ans;
        while(p!=nullptr){
            ans.insert(p->val);
            p=p->next;
        }
        head=nullptr;
        p=head;
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            ListNode * temp = new ListNode(*itr);
            if(head==nullptr){
                head = temp;
                p=temp;
            }else{
                p->next=temp;
                p=p->next;
            }
        }
        return head;
       
    }
};
