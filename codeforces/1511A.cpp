#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 1 || x == 3) {
                sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
