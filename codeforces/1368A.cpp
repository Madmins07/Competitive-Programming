#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        int moves=0;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
 
            }else{
                a+=b;
            }
            moves++;
        }
        cout<<moves<<endl;
    }
    return 0;
}
