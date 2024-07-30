class Solution {
public:
    vector<int> minOperations(string boxes) {
        const int n = boxes.length();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                if(i!=j){
                    sum+=abs(j-i)*(boxes[j]-'0');
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
