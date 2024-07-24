class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> ans;
        for(auto &ch:stones){
            ans[ch]++;
        }
        int sum = 0;
        for(auto &ch:jewels){
            sum+=ans[ch];
        }
        return sum;
    }
};
