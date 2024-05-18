#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a,m=0,b=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%2==0){
                m+=a;
            }else{
                b+=a;
            }
        }
        if(m>b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
