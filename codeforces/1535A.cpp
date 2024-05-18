#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a>b){
            if(c>d && (d>a || b>c)){
                cout<<"NO"<<endl;
            }else if(d>c && (c>a || b>d)){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            if(c>d && (d>b || a>c)){
                cout<<"NO"<<endl;
            }else if(d>c && (c>b || a>d)){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
 
    }
    return 0;
}
