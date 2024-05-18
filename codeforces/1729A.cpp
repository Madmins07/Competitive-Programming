#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,a,b,c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if((a-1)<fabs(c-b)+fabs(c-1)){
            cout<<1<<endl;
        }else if((a-1)==fabs(c-b)+fabs(c-1)){
            cout<<3<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}
