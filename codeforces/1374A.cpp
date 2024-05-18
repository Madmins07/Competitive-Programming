#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    int t,x,y,n;
    cin>>t; 
    while(t--){
        cin>>x>>y>>n;
        if(n%x==y){
            cout<<n<<endl;
        }else if((n-(n%x)+y)<=n){
            cout<<n-(n%x)+y<<endl;
        }
        else{
            cout<<n-((n%x)+(x-y))<<endl;
        }
    }
    return 0;
}
