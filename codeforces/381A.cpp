#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int max=0;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(arr[r]>=arr[l]){
            if(i%2==0) max+=arr[r];
            r--;
        }else{
            if(i%2==0) max+=arr[l];
            l++;
        }
    }
    cout<<max<<" "<<sum-max;
    return 0;
}
