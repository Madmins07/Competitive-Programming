class Solution {
public:
    bool isAnagram(string s, string t) {
        const int n1=s.size();
        const int n2=t.size();
        if(n1!=n2){
            return false;
        }else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<n1;i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
            return true;
        }
    }
};
