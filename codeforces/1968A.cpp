#include<bits/stdc++.h>
#define pb push_back
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    ll int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int temp;
        for(int i=1;i<n;i++){
            if(n%i==0){
                temp=i;
            }
        }
        cout<<n-temp<<endl;
    }
    return 0;
}
