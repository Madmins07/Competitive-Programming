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
    int getDecimalValue(ListNode* head) {
        ListNode * p=head;
        int sum=0,pos=0;
        while(p!=nullptr){
            pos++;
            p=p->next;
        }
        free(p);
        while(head!=nullptr){
            if(head->val==1)
                sum+=pow(2,pos-1);
            head=head->next;
            pos--;
        }
        return sum;
    }
};
