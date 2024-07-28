class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        const int n = nums.size();
        int l = 0, r = 0, maxlen = 0;
        while (r < n) {
            if(nums[r]==1){
                maxlen = max({maxlen,r-l+1});
            }else{
                l=r+1;
            }
            r++;
        }
        return maxlen;
    }
};
