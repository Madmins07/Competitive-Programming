#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int t,a,c,b,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>x>>y;
        if(a>=x) x=0;
        else x-=a;
        if(b>=y)y=0;
        else y-=b;
        if(x+y<=c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
