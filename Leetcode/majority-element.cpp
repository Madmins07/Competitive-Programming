class Solution {
public:
    int majorityElement(vector<int>& nums) {
        const int n = nums.size();
        map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int max=-1,num;
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            if(itr->second>max) {max=itr->second;num=itr->first;}
        }
        return num;
    }
};
