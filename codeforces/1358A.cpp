#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int max=0,mini=n+2,a,max_pos,min_pos;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>max) {max=a;max_pos=i;}
            if(a<mini) {mini=a;min_pos=i;}
            arr[i]=a;
        }
        int d1,d2,d3;
        if(max_pos>min_pos){
            d1=max_pos+1;
            d2=n-min_pos;
        }else{
            d1=min_pos+1;
            d2=n-max_pos;
        }
        if(min_pos<=n/2){
            d3=min_pos+1;
        }else if(min_pos>n/2) {
            d3 = n - min_pos;
        }
        if(max_pos<=n/2){
            d3+=max_pos+1;
        }else{
            d3+=n-max_pos;
        }
        a=min({d1,d2,d3});
        cout<<a<<endl;
    }
    return 0;
}
