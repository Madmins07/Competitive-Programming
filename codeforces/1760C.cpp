#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],max=-1,s[n];
        for(int i=0;i<n;i++){
            cin>>a;
            arr[i]=a;s[i]=a;
            if(a>max){
                max=a;
            }
        }
        sort(s,s+n);
        for(int i=0;i<n;i++){
            if(arr[i]!=max){
                cout<<arr[i]-max<<" ";
            }else{
                cout<<max-s[n-2]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
