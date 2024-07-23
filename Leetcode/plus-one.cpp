class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        const int n = nums.size();
        if(nums[n-1]<9){
            nums[n-1]++;
        }else{
            int carry = 1,i=1;
            nums[n-1]=0;
            if(n>=2){while(carry!=0){
                if(nums[n-1-i]<9 && n-i-1>=0) {nums[n-1-i]++;carry=0;}
                else if(n-i-1==0 && nums[n-1-i]==9) {nums[n-1-i]=0;nums.insert(nums.begin(),1);carry=0; }
                else nums[n-i-1]=0;
                i++;
            }}
            else{
                nums.insert(nums.begin(),1);
            }
        }
        return nums;
    }
};
