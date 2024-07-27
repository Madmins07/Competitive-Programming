class Solution {
public:
    int minPartitions(string n) {
        int max = -1;
        for(auto &ch:n){
            if(ch-'0'>max) max = ch-'0';
        }
        return max;
    }
};
