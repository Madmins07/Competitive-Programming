class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<>());
        int i=1,sum=0;
        while(i<piles.size()){
            sum+=piles[i];
            i+=2;
            piles.pop_back();
        }
        return sum;
    }

};
