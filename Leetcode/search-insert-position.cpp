class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0 , r = nums.size()-1;
        while(l<=r){
            if(nums[(l+r)/2]==target) return (l+r)/2;
            else if(nums[r]<target) return r+1;
            else if(nums[l]>target) return l;
            else if(nums[(l+r)/2]>target){
                r = ((l+r)/2)-1;
            }else{
                l = ((l+r)/2)+1;
            }
        }
        return l;
    }
};
