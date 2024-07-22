class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int temp = i,temp1= i;
            while(temp!=0){
                int x = temp %10;
                if(x==0) break;
                else if(temp1%x!=0){
                    break;
                }
                temp/=10;
            }
            if(temp==0){
                ans.push_back(temp1);
            }
        }
        return ans;
    }
};
