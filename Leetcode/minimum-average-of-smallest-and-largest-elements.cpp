class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        const int n = nums.size();
        double small,avg;
        for(int i=0;i<n/2;i++){
            avg = (nums[i]+nums[n-i-1])/2.0;
            if(i==0) small=avg;
            else if(avg<small) small=avg;
        }
        return small;
    }
};
