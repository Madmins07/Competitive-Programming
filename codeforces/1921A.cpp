#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--){
        int arr1[4],arr2[4];
        for(int i=0;i<4;i++){
            cin>>arr1[i]>>arr2[i];
        }
        sort(arr1,arr1+4);
        sort(arr2,arr2+4);
        cout<<(arr1[2]-arr1[1])*(arr2[2]-arr2[1])<<endl;
    }
    return 0;
}
