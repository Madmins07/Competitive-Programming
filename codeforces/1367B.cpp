
 #include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0 and i%2==0){
                even++;
            }else if(arr[i]%2!=0 and i%2!=0){
                odd++;
            }
        }
        if(even==odd && even+odd==n){
            cout<<0<<endl;
        }else{
            even=0,odd=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0 and i%2!=0){
                    even++;
                }else if(arr[i]%2!=0 and i%2==0){
                    odd++;
                }
            }
            if(even==odd){
                cout<<even<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
 
    }
    return 0;
}
