/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * tempB = headB;
        map<ListNode*,int> mp;
        while(tempB!=nullptr){
            mp[tempB]=1;
            tempB=tempB->next;
        }
        ListNode * tempA = headA;
        while(tempA!=nullptr){
            if(mp[tempA]){
                return tempA;
            }
            tempA=tempA->next;
        }
        return nullptr;
    }
};
