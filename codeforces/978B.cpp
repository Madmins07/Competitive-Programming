#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int count=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            s[i]='a';
            count++;
        }
    }
    if(n-count<2){
        cout<<2<<endl;
    }else{
        cout<<count<<endl;
    }
    return 0;
}
