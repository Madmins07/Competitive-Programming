#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==0) cout<<0<<endl;
        else if(n==1) cout<<2<<endl;
        else if(n==2) cout<<1<<endl;
        else {
            if(n%3==0) cout<<n/3<<endl;
            else cout<<n/3+1<<endl;
        }
    }
    return 0;
}
