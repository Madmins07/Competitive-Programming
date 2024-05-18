#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main(){
    int t,x;
    cin>>t;
 
    while(t--){
        cin>>x;
        int sum1=(x%10-1)*10;
        int count=0;
        while(x!=0){
            count++;
            x=x/10;
        }
        if(count==1){
            sum1+=1;
        }else if(count==2){
            sum1+=3;
        }else if(count==3){
            sum1+=6;
        }else{
            sum1+=10;
        }
        cout<<sum1<<endl;
    }
    return 0;
}
