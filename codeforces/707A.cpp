
 #include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main()
{
    fastread();
    int n,m,flag=0;
    char a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(flag==0){
        for(int j=0;j<m;j++){
            cin>>a;
            if(a=='C' || a=='M' || a=='Y'){
                flag=1;
                cout<<"#Color"<<endl;
                break;
            }
        }}
    }
    if(flag==0){
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
