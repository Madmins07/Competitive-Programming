#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a,even=0,odd=0;
        for(int i=0;i<2*n;i++){
            cin>>a;
            if(a%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
