class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        const int n = nums.size();
        int even_sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even_sum+=nums[i];
            }
        }
        const int x = queries.size();
        for(int i = 0; i <x ; i++){
            int prev = nums[queries[i][1]];
            nums[queries[i][1]]+=queries[i][0];
            int after =nums[queries[i][1]];
            if(prev%2==0 && after%2!=0){
                even_sum-=prev;
            }else if(prev%2==0 && after%2==0){
                even_sum+=after-prev;
            }else if(prev%2!=0 && after%2==0){
                even_sum+=after;
            }
            ans.push_back(even_sum);
        }
        return ans;
    
    }
};
