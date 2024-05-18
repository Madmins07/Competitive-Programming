#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n+2)%3==0){
            cout<<(n+2)/3<<" "<<((n+2)/3)-1<<endl;
        }else if(n%3==0){
            cout<<n/3<<" "<<n/3<<endl;
        }
 
        else{
            cout<<n/3<<" "<<(n/3)+1<<endl;
        }
    }
 
    return 0;
}
