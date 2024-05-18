#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<2<<" "<<n-n%2<<endl;
    }
    return 0;
}
