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
        char arr[n];
        cin>>arr;
        int count=0;
        for(int i=0;i<n/2;i++){
            if(arr[i]=='0' && arr[n-i-1]=='1'){
                count++;
            }else if(arr[i]=='1' && arr[n-i-1]=='0'){
                count++;
            }else break;
        }
        cout<<n-count*2<<endl;
    }
 
    return 0;
}
