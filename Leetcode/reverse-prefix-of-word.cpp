class Solution {
public:
    string reversePrefix(string word, char ch) {
        vector<char> ans;
        int flag = 0;
        for (auto x : word) {
            ans.push_back(x);
            if (x == ch) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            int n = ans.size() - 1, temp = n;
            for (int i = 0; i <= n; i++) {
                word[i] = ans[temp];
                temp--;
            }
        }
        return word;
    }
};
