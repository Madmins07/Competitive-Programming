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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * l = list1;
        ListNode * r = list1;
        int count = 0;
        while(count<a-1){
            count++;
            l=l->next;
            r=r->next;
        }
        while(count<b+1){
            r=r->next;
            count++;
        }
        l->next=list2;
        while(list2->next!=nullptr){
            list2=list2->next;
        }
        list2->next=r;
        return list1;
    }
};
