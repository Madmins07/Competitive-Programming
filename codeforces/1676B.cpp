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
        int a[n];
        cin>>a[0];
        int min=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]<min) min=a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]!=min){
                sum+=a[i]-min;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
