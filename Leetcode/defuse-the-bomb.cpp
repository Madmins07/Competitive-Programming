class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        const int n = code.size();
        vector<int> ans;
        if (k >= 0) {
            for (int i = 0; i < n; i++) {

                int x = i + 1, sum = 0, s = 0;
                for (int j = x; j < k + x; j++) {
                    if (j > n - 1) {
                        sum += code[s];
                        s++;
                    } else {
                        sum += code[j];
                    }
                }
                ans.push_back(sum);
            }
        } else {
            for (int i = 0; i < n; i++) {

                int x = i - 1, sum = 0, s = n - 1, temp = abs(k);
                for (int j = x; temp > 0; j--) {
                    if (j < 0) {
                        sum += code[s];
                        s--;
                    } else {
                        sum += code[j];
                    }
                    temp--;
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }

};
