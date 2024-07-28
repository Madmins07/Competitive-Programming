class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> ans;
        const int n = s.length();
        int l=0,r=0,maxi=0;
        while(r<n){
            if(ans[s[r]]==0){
                ans[s[r]]++;
                r++;
                
            }else{
                ans[s[l]]--;
                l++;
            }
            maxi = max({r-l,maxi});
            
        }
        return maxi;
    }
};
