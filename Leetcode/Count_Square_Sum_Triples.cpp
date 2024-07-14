class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                double x = sqrt(i*i + j*j);
                if(x-(int)x == 0 && x<=n){
                    count++;
                }
                
            }
        }
        return count;
    }
};
