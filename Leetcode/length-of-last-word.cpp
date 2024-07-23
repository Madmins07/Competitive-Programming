class Solution {
public:
    std::vector<std::string> split(const std::string& s) {
        std::istringstream iss(s);
        return std::vector<std::string>(std::istream_iterator<std::string>(iss),
                                        std::istream_iterator<std::string>());
    }
    int lengthOfLastWord(string s) {
        vector<string> ans = split(s);
        return ans[ans.size()-1].length();
    }
};
