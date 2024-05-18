#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,t,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        int max=-1,pos;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(b>max && a<=10){
                max=b;
                pos=i;
            }
        }
        cout<<pos+1<<endl;
    }
    return 0;
}
