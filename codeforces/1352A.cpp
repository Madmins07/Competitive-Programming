#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int t,a,l;
    cin>>t;
    while(t--){
        cin>>a;
        int count=0,dig=0;
        int temp=a;
        while(a!=0){
            l=a%10;
            a/=10;
            if(l!=0){
                count++;
            }
            dig++;
        }
        cout<<count<<endl;
        int i=dig;
        while(temp!=0){
            l=temp%10;
            temp/=10;
            if(l!=0){
                cout<<l*pow(10,dig-i)<<" ";
            }i--;
 
        }cout<<"\n";
 
    }
    return 0;
}
