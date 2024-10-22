class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        do {
            ans.push_back(keys(nums));
        } while (std::next_permutation(nums.begin(), nums.end()));
        return ans;
    }
    vector<int> keys(const std::vector<int>& vec) {
        vector<int> keys;
        for (int num : vec) {
            keys.push_back(num);
        }
        return keys;
    }
};
