#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (m % 2 == 0) {
            cout << (n * m) / 2 << endl;
        } else {
            cout << ((n * (m - 1)) / 2) << endl;
        }
    }
    return 0;
}
