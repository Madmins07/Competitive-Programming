#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin>>t;
    char s[26],s1[51];
    while(t--){
        cin>>s ;
        cin>>s1;
        int x=strlen(s1);
        int y=strlen(s);
        int sum=0,temp=0,count=0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(s1[i]==s[j]){
                    count++;
                    break;
                }count++;
            }
            if(temp!=0) sum+=fabs(temp-count);
            temp=count;
            count=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
