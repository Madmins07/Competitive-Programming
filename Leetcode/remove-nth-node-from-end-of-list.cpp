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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        ListNode * a = head;
        int count=0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        if(count==n){
            return head->next;
        }
        temp=head;
        a=head->next;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
            a=a->next;
        }
        if(a!=nullptr) temp->next=a->next;
        else temp->next=nullptr;
        return head;
    }
};
