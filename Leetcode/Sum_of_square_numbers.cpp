class Solution {
public:
    bool judgeSquareSum(int c) {
        const int n = sqrt(c);
        for(int i=0;i<=n;i++){
            double x =sqrt(c-pow(i,2));
            if(x -(int)x == 0){
                return true;
            }
        }
        return false;
    }
};
