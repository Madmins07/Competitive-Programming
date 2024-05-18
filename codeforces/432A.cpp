#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a+k<=5) count++;
    }
    cout<<count/3<<endl;
    return 0;
}
