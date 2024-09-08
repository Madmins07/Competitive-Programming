#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, a, x;
    cin >> t;
    while (t--) {
        cin >> a;
        int sum = 0;
        for (int i = 0; i < a; i++) {
            cin >> x;
            if (i % 2 == 0) {
                sum += x;
            } else {
                sum -= x;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
