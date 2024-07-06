class Solution {
public:
    bool isAnagram(string s, string t) {
        const int n1=s.size();
        const int n2=t.size();
        if(n1!=n2){
            return false;
        }else{
            map<char,int> key1,key2;
            for(int i=0;i<n1;i++){
                key1[s[i]]++;
                key2[t[i]]++;
            }
            auto itr2=key2.begin();
            for(auto itr=key1.begin();itr!=key1.end();itr++){
                if(itr->second!=itr2->second || itr->first!=itr2->first){
                    return false;
                }
                itr2++;
            }
            return true;
        }
    }
};
