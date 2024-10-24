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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2);
        ans[0]=-1;ans[1]=-1;
        ListNode * temp = head;
        vector<int> val;
        while(temp){
            val.push_back(temp->val);
            temp=temp->next;
        }
        const int n = val.size();
        if(n<=2){
            return ans;
        }
        vector<int> dist;
        for(int i=1;i<n-1;i++){
            if((val[i-1]>val[i] && val[i+1]>val[i]) || (val[i-1]<val[i] && val[i+1]<val[i])){
                dist.push_back(i);
            }
        }
        const int x = dist.size();
        if(x<2) return ans;
        ans[1]=abs(dist[0]-dist[x-1]);
        int min = 1000000;
        for(int i=0;i<x-1;i++){
            if(abs(dist[i]-dist[i+1])<min){
                min = abs(dist[i]-dist[i+1]);
            }
        }
        ans[0]=min;
        return ans;
    }
};
