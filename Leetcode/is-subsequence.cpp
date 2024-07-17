class Solution {
public:
    bool isSubsequence(string s, string t) {
        const int n = t.size();
        const int x = s.size();
        if (n == 0 && x == 0)
            return true;
        if (x > n)
            return false;

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[count] == t[i]) {
                count++;
            }
            if (count == x)
                return true;
        }
        return false;
    }
};
