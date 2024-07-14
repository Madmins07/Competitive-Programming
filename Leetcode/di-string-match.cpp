class Solution {
public:
    vector<int> diStringMatch(string s) {
        const int n = s.size();
        vector<int> ans;
        int icount = 0, dcount = n;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){
                ans.push_back(icount);
                icount++;
            }else{
                ans.push_back(dcount);
                dcount--;
            }
        }
        return ans;
    }
};
