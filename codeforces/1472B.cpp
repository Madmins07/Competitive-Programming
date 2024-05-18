#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=0,can=0;
        for(int i=0;i<n;i++){
            cin>>k;
            if(k==1){
                count++;
            }
            if(k==2) can++;
        }
        if(count%2==0 && (can*2+count)%2==0){
            if(count>0) {cout<<"YES"<<endl;}
            else if(count==0 && can%2==0) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
