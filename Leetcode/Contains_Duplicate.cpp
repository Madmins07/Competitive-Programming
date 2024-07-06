class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> s1{std::begin(nums), std::end(nums)};
        if(s1.size()==nums.size()) return false;
        return true;
    }
};
