class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int> ans;
        int i = 0;
        for(char &ch:s){
            ans[ch]=i;
            i++;
        }
        i=0;int sum=0;
        for(char &ch:t){
            ans[ch]=abs(ans[ch]-i);
            i++;sum+=ans[ch];
        }
        return sum;
    }
};
