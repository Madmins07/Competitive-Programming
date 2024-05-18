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
        char s[n];
        cin>>s;
        int up=0,right=0,flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                up++;
            }else if(s[i]=='D'){
                up--;
            }else if(s[i]=='R'){
                right++;
            }else{
                right--;
            }
            if(up==1 && right==1){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
