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
        char s[n];
        cin>>s;
        int flag=1,final=0,initial=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B' && flag==1){
                initial=i;
                flag=0;
            }
            if(s[i]=='B'){
                final=i;
            }
        }
        cout<<final-initial+1<<endl; 
    }
    return 0;
}
