#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int y,w;
    cin>>y>>w;
    if(y>=w){
        int x=6-y+1;
        int l=6;
        if(x%6==0){
            x=1;
            l=1;
        }else if(x%3==0){
            x/=3;
            l=2;
        }else if(x%2==0){
            x/=2;
            l=3;
        }
        cout<<x<<"/"<<l<<endl;
    }else{
        int x=6-w+1;
        int l=6;
        if(x%6==0){
            x=1;
            l=1;
        }else if(x%3==0){
            x/=3;
            l=2;
        }else if(x%2==0){
            x/=2;
            l=3;
        }
        cout<<x<<"/"<<l<<endl;
    }
    return 0;
}
