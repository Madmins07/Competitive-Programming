#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr1[n],arr2[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            sum+=arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        for(int i=0;i<k;i++){
            if(arr1[i]<arr2[n-1-i]){
                sum=sum-arr1[i]+arr2[n-1-i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
