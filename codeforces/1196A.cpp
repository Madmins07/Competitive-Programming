#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        ll int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << endl;
    }
    return 0;
}
