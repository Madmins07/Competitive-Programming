class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        const int n = nums.size();
        int l = 0, r = 0, zeroes = 0, maxlen = 0;
        while(r<n){
            if(nums[r]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[l]==0) zeroes--;
                l++;
            }
            if(zeroes<=k){
                maxlen = max({r-l+1,maxlen});
            }
            r++;
        }
        return maxlen;
    }
};
