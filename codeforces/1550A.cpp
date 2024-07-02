#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x = pow(n, 0.5);
        if (pow(x, 2) == n)cout << x << endl;
        else cout << x + 1 << endl;
    }
    return 0;
}
