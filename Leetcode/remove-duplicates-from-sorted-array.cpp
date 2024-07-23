class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        for(auto x:nums){
            ans.insert(x);
        }
        int i = 0;
        for(auto x:ans){
            nums[i]=x;
            i++;
        }
        return ans.size();
    }
};
