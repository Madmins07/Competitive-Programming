#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }else if(b>a){
            int x=b-a;
            int y=(x%10==0) ? x/10:x/10+1;
            cout<<y<<endl;
        }else{
            int x=a-b;
            int y=(x%10==0) ? x/10:x/10+1;
            cout<<y<<endl;
        }
    }
    return 0;
}
