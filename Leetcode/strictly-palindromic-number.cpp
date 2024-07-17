class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<=n-2;i++){
            vector<int> ans;
            int temp = n;
            while(temp>0){
                ans.push_back(temp%i);
                temp=temp/i;
            }
            const int x = ans.size();
            for(int i=0;i<x/2;i++){
                if(ans[i]!=ans[x-1-i]){
                    return false;
                }
            }
        }
        return true;
    }
};
