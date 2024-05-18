#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    char s[6];
    cin >> t;
    while (t--) {
        cin>>s;
        if((s[0]-'0')*10+(s[1]-'0')>12){
            if(((s[0]-'0')*10+(s[1]-'0')-12)<10) cout<<"0";
            cout<<((s[0]-'0')*10+(s[1]-'0')-12)<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }else if((s[0]-'0')*10+(s[1]-'0')!=12){
            if((s[0]-'0')*10+(s[1]-'0')!=0){ if((s[0]-'0')*10+(s[1]-'0')<10) cout<<"0";cout<<(s[0]-'0')*10+(s[1]-'0')<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;}
            else{ if((s[0]-'0')*10+(s[1]-'0')+12 <10) cout<<"0";cout<<(s[0]-'0')*10+(s[1]-'0')+12<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;}
        }else{
            if((s[0]-'0')*10+(s[1]-'0')<10) cout<<"0";
            cout<<((s[0]-'0')*10+(s[1]-'0'))<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
    }
    return 0;
}
