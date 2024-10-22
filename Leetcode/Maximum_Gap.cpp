class Solution {
public:
    int maximumGap(vector<int>& nums) {
        const int n = nums.size();
        if(n<2){
            return 0;
        }
        int max=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]>max){
                max=nums[i+1]-nums[i];
            }
        }
        return max;
    }
};
