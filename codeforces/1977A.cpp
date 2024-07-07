#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n < m) cout << "No" << endl;
        else {
            if ((n - m) % 2 == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
