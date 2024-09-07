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
        cout << b - a << endl;
    }
    return 0;
}
