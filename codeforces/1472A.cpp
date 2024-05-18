#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,w,h,n;
    cin>>t;
 
    while(t--){
        cin>>w>>h>>n;
        int count=1;
        while(1){
            if(w%2!=0 && h%2!=0){
                break;
            }
            if(w%2==0){
                w/=2;
                count*=2;
            }
            else if(h%2==0){
                h/=2;
                count*=2;
            }
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
