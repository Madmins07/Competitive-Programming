#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t,h,m;
    cin>>t;
    while(t--){
        cin>>h>>m;
        if(m!=0){
            cout<<(23-h)*60+(60-m)<<endl;
        }else{
            cout<<(24-h)*60<<endl;
        }
    }
    return 0;
}
