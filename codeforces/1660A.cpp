#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==0){
            cout<<1<<endl;
        }else{
            cout<<a+2*b+1<<endl;
        }
    }
    return 0;
}
