#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
        ull x=1000001;
        char s[x];
        cin>>s;
        const int n=strlen(s);
        int num=0;
        for(int i=0;i<n;i++){
            if(i==0 && s[i]!=1) num+=(s[i]-'0'-1)*pow(10,n-1-i);
            else num+=(s[i]-'0')*pow(10,n-1-i);
        }
        cout<<num<<endl;
    }
    return 0;
}
