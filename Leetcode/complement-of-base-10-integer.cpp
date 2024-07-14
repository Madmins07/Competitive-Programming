class Solution {
public:
    int bitwiseComplement(int n) {
        int sum=0,count=0;
        if(n==0) return 1;
        while(n!=0){
            if(n%2==0){
            sum+=pow(2,count);}
            count++;
            n=n/2;
        }
        return sum;
    }
};
