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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode * p=head;
        ListNode * after=p->next;
        while(after!=nullptr){
            ListNode* x = after->next;
            after->next=p;
            p=after;
            after=x;
        }
        head->next=nullptr; 
        return p;

    }
};
