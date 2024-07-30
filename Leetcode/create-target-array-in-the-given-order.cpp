class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        const int n = nums.size();
        vector<int> target;
        for(int i=0;i<n;i++){
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};
