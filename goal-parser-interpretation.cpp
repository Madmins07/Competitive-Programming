class Solution {
public:
    string interpret(string s) {
        const int n = s.size();
        string k;
        int var=0;
        while(var<n){
            if(s[var]=='G') {k +='G';var++;}
            else if(s[var]=='(' && s[var+1]==')'){
                k+='o';
                var+=2;
            }else{
                k+="al";
                var+=4;
            }
        }
        return k;
    }
};
