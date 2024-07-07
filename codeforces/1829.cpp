#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n, x, m;
    cin >> t;
    while (t--) {
        cin >> n;
        multiset<int> ten, eleven, one;
        for (int i = 0; i < n; i++) {
            cin >> x >> m;
            if (m == 10) {
                ten.insert(x);
            } else if (m == 11) {
                eleven.insert(x);
            } else if (m == 1) {
                one.insert(x);
            }
        }
        auto itr1 = ten.begin();
        auto itr2 = one.begin();
        auto itr3 = eleven.begin();
        int x1 = ten.size();
        int x2 = eleven.size();
        int x3 = one.size();
        if (x2 == 0 && (x1 == 0 || x3 == 0)) {
            cout << -1 << endl;
        } else if (x1 == 0 || x3 == 0) {
            cout << *itr3 << endl;
        } else if (x2 == 0 && x1 != 0 && x3 != 0) {
            cout << *itr1 + *itr2 << endl;
        } else {
            if (*itr1 + *itr2 < *itr3) {
                cout << *itr1 + *itr2 << endl;
            } else {
                cout << *itr3 << endl;
            }
        }
    }
}
