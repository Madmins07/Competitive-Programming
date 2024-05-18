#include <iostream>
#include <algorithm>
using namespace std;
int minimum(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }else if(b<=a && b<=c){
        return b;
    }else{
        return c;
    }
}
int main(){
    int n,a,count1=0,count2=0,count3=0;
    cin>>n;
    int i=0;
    int arr[n];
    for(int p=0;p<n;p++){
        cin>>a;
        arr[i]=a;
        i++;
        if(a==1){
            count1++;
        }else if(a==2){
            count2++;
        }else if(a==3){
            count3++;
        }
    }
    a=minimum(count1,count2,count3);
    cout<<a<<endl;
    if(a!=0){
        for(int k=0;k<a;k++){
            int flag1=0,flag2=0,flag3=0;
            for(int j=0;j<n;j++){
                if(arr[j]==1 && flag1!=1){
                    cout<<j+1<<" ";
                    flag1=1;
                    arr[j]=-1;
                }
                if(arr[j]==2 && flag2!=1){
                    cout<<j+1<<" ";
                    flag2=1;
                    arr[j]=-1;
                }
                if(arr[j]==3 && flag3!=1){
                    cout<<j+1<<" ";
                    flag3=1;
                    arr[j]=-1;
                }
            }cout<<"\n";
        }
    }
    return 0;
}
