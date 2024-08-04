class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int n1 = word1.length();
        const int n2 = word2.length();
        string s;
        if (n1 == n2) {
            for (int i = 0; i < n1; i++) {
                s += word1[i];
                s += word2[i];
            }
        } else {
            if(n1>n2){
                for(int i=0;i<n2;i++){
                    s+=word1[i];
                    s+=word2[i];
                }
                for(int i=n2;i<n1;i++){
                    s+=word1[i];
                }
            }else{
                for(int i=0;i<n1;i++){
                    s+=word1[i];
                    s+=word2[i];
                }
                for(int i=n1;i<n2;i++){
                    s+=word2[i];
                }
            }
        }
        return s;
    }
};
