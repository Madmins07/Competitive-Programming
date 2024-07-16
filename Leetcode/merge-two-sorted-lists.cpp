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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * itr1 = list1;
        ListNode * itr2 = list2;
        if(itr1==nullptr){
            return itr2;
        }
        if(itr2==nullptr){
            return itr1;
        }
        vector<int> key;
        while(itr1!=nullptr){
            key.push_back(itr1->val);
            itr1=itr1->next;
        }
        while(itr2!=nullptr){
            key.push_back(itr2->val);
            itr2=itr2->next;
        }
        sort(key.begin(),key.end());
        const int t = key.size();
        ListNode * head =nullptr;ListNode * temp = head;
        for(int i=0;i<t;i++){
            ListNode * p = new ListNode(key[i],nullptr);
            if(i==0){
                 head=p;
                 temp=p;
            }else{
                temp->next = p;
                temp=temp->next;
            }
        }
        
        return head;
    }
};
