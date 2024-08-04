class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX,num;
        for(auto x:nums){
            if(abs(x-0)<=mindiff){
                mindiff = abs(x-0);
                num=x;
            }
        }
        return num;
    }
};
