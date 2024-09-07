#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a % 2 != 0) cout << "NO" << endl;
        else if (a == 0 && b % 2 != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
