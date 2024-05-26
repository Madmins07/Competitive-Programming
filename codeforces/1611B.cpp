#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
#include <cstdio>

int main() {
    fastread();
    long t;
    cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        long res = (a < b ? a : b);
        res = (res < (a + b) / 4) ? res : (a + b) / 4;
        cout << res << endl;
    }
    return 0;
}
