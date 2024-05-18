#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x=0,k=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<arr[x]<<" ";
                x+=1;
            }else{
                cout<<arr[k]<<" ";
                k--;
            }
        }
        cout<<"\n";
    }
    return 0;
}
