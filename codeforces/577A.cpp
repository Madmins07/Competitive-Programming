#include <iostream>
#include <cstdlib>
using namespace std;
 
int main(){
    int t,n,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>a>>b;
        int sum=0;
        while(n!=0){
            if(n%2==0 && 2*a>b){
                sum+=b;
                n-=2;
            }else{
                sum+=a;
                n--;
            }
        }
        cout<<sum<<endl;
 
    }
    return 0;
}
