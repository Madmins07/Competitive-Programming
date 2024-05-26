#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main() {
    fastread();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << 256 * (min({a, c, d})) + 32 * (min({b, a - min({a, c, d})}));
    return 0;
}
