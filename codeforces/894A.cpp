#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    char s[101];
    cin>>s;
    const int n=strlen(s);
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='A'){
                    for(int k=j+1;k<n;k++){
                        if(s[k]=='Q'){
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
