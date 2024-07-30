class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int count = 0;
        for (auto x : nums) {
            if (x < pivot) {
                ans.push_back(x);
            }
            if (x == pivot)
                count++;
        }
        for (int i = 0; i < count; i++)
            ans.push_back(pivot);
        for (auto x : nums) {
            if (x > pivot) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};
