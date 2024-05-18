#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int prime(int n, int m){
    int i;
    vector<int> arr;
    for(i=n+1;i<=m;i++){
        int flag=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }if(flag==1){
            arr.push_back(i);
        }
    }
    const int p=arr.size();
 
    if(p!=1 ){
        return 0;
    }else if(arr[0]==m){
        return 1;
    }
return 0;
 
}
int main(){
    int n,m;
    cin>>n>>m;
    int x=prime(n,m);
    if(x==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
 
    return 0;
}
