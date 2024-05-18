#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        if((n*m)%2==0)
            cout<<(n*m)/2<<endl;
        else
            cout<<(n*m)/2+1<<endl;
    }
    return 0;
}
