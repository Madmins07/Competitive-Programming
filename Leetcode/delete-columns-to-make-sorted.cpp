class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        const int n = strs.size();
        const int x = strs[0].length();
        int count = 0;
        for(int i=0;i<x;i++){
            for(int j=0;j<n-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
