#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        if((a/2)%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=1;i<a/2+1;i++){
                cout<<i*2<<" ";
            }
            for(int i=1;i<a/2+1;i++){
                if(i==a/2){
                    cout<<2*i+(a/2-1);
                }
                else{cout<<2*i-1<<" ";}
            }
            cout<<"\n";
        }
    }
    return 0;
}
