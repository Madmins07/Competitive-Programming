#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << a[0] - '0' + a[1] - '0' << endl;
    }
    return 0;
}
