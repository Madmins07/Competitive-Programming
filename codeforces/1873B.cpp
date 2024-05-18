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
    while(t--) {
        cin >> n;
        int arr[n],product=1,flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0 && flag==0){
                flag=1;
                arr[i]+=1;
            }
            product*=arr[i];
        }
        sort(arr,arr+n);
        if(flag==0) cout<<(product/arr[0])*(arr[0]+1)<<endl;
        else{
            cout<<product<<endl;
        }
    }
    return 0;
}
