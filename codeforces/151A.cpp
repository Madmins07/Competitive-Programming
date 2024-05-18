#include <iostream>
#include <set>
using namespace std;
 
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=(k*l)/nl;
    int y=p/(np);
    int z=c*d;
    if(x<=y && x<=z){
        cout<<x/n;
    }else if(y<=x && y<=z){
        cout<<y/n;
    }else{
        cout<<z/n;
    }
    return 0;
}
