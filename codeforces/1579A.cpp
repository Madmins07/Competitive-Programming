#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while(t--){
        char s[51];
        cin>>s;
        int x=strlen(s),sum=0;
        for(int i=0;i<x;i++){
            if(s[i]=='B'){
                sum++;
            }
        }
        if(sum==x/2 && x%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
