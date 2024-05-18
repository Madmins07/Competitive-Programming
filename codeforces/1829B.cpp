#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,t,a;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0,max=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==0){
                count++;
            }else{
                count=0;
            }
            if(count>max){
                max=count;
            }
        }
        cout<<max<<endl;
    }
 
    return 0;
}
