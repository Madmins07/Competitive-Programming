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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode * p = head;
        ListNode * after = p->next;
        while(after!=nullptr){
            int mini = min({p->val,after->val});
            ListNode * temp = new ListNode();
            for(int i = mini ; i>=1 ; i--){
                if((p->val)%mini==0 && (after->val)%mini==0){
                    temp->val = mini;
                    break;
                }else{
                    mini--;
                }
            }
            p->next  = temp;
            temp->next = after;
            p=after;
            after=after->next;
        }
        return head;
    }
};
