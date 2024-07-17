class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        const int n = nums.size();
        int ops=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3!=0){
                ops++;
            }
        }
        return ops;
    }
};
