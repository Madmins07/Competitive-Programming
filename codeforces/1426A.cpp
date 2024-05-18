#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int t,n,x;
 
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
        }else{
            n=n-2;
            int count=1;
            while(n-x>0){
                n=n-x;
                count++;
            }
            cout<<count+1<<endl;
        }
 
    }
    return 0;
}
