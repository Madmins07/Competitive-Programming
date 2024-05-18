#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
        int arr[7];
        for(int & i : arr){
            cin>>i;
        }
        for(int i=2;i<6;i++){
            if(arr[0]+arr[1]+arr[i]==arr[6]){
                cout<<arr[0]<<" "<<arr[1]<<" "<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
