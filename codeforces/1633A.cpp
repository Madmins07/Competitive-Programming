#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    cin >> t;
    while (t--) {
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }else{
            int rem=n%7;
            int x=(n-n%10);
            if(n-rem+7>=x && (n-rem+7)<(x+10)) cout<<n-rem+7<<endl;
            else cout<<n-rem<<endl;
        }
    }
    return 0;
}
