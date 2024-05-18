#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t;
    ull n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0) cout<<n/2<<endl;
        else cout<<n/2+1<<endl;
    }
    return 0;
}
