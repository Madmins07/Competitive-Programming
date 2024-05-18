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
        int arr1[n],arr2[n];
        ll min1=1000000000,min2=1000000000;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]<min1) min1=arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            if(arr2[i]<min2) min2=arr2[i];
        }
        ll count=0;
        for(int i=0;i<n;i++){
            if(arr1[i]>min1 && arr2[i]>min2) {
                if (arr1[i] - min1 > arr2[i] - min2) {
                    count += arr2[i] - min2;
                    arr1[i]=arr1[i]-(arr2[i]-min2);
                    arr2[i]=min2;
 
 
                } else {
                    count += arr1[i] - min1;
                    arr2[i]=arr2[i]-(arr1[i]-min1);
                    arr1[i]=min1;
 
                }
            }if(arr1[i]>min1 && arr2[i]==min2){
                count+=arr1[i]-min1;
                arr1[i]=min1;
 
 
            }if(arr2[i]>min2 && arr1[i]==min1){
                count+=arr2[i]-min2;
                arr2[i]=min2;
 
 
            }
        }
        cout<<count<<endl;
 
    }
    return 0;
}
