class Solution {
public:
    int differenceOfSums(int n, int m) {
        int count = 0;
        if(m>n) return (n*(n+1))/2;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                count+=i;
            }else{
                count-=i;
            }
        }
        return count;
    }
};
