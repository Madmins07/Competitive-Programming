class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        const int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<k){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};
