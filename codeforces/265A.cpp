#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    char s[50],t[50];
    cin>>s;
    cin>>t;
    int a =strlen(t),count=0,x=0;
    for(int i=0;i<a;i++){
        if(s[x]==t[i]){
            count++;
            x++;
        }
    }
    cout<<count+1<<endl;
    return 0;
}
