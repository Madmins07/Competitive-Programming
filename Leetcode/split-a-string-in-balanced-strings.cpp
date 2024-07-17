class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,count=0;
        for(auto &ch:s){
            if(ch=='R') r++;
            else l++;
            if(r==l){
                r=0;
                l=0;
                count++;
            }
        }
        return count;
    }
};
