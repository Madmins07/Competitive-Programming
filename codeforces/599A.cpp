#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    ll mini = min({d1 + d2 + d3, d2 * 2 + d1 * 2, 2 * d1 + 2 * d3, 2 * d2 + 2 * d3});
    cout << mini;
    return 0;
}
