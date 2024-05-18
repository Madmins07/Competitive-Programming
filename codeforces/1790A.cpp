#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    int ans[30]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7};
    char s[31];
    cin>>t;
    while(t--){
        cin>>s;
        int count=0;
        for(int i=0;i<30;i++){
            if(ans[i]==(s[i]-'0')){
                count++;
            }else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
