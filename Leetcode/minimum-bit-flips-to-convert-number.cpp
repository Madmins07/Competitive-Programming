class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> a1,a2;
        while(start!=0){
            a1.push_back(start%2);
            start/=2;
        }
        while(goal!=0){
            a2.push_back(goal%2);
            goal/=2;
        }
        const int n1 = a1.size();int count=0;
        const int n2 = a2.size();
        if(n1>n2){
            for(int i=0;i<n1-n2;i++)a2.insert(a2.end(),0);
        }else if(n2>n1){
            for(int i=0;i<n2-n1;i++)a1.insert(a1.end(),0);
        }
        const int n = a1.size();
        for(int i=0;i<n;i++){
            if(a1[i]!=a2[i]){
                count++;
            }
        }
        return count;
    }
};
