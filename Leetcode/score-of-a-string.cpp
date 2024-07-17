class Solution {
public:
    int scoreOfString(string s) {
        const int n = s.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=abs(s[i+1]-s[i]);
        }
        return sum;
    }
};
