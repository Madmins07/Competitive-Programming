#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    char a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            if (a == '#') {
                ans.push_back(1);
            } else if (b == '#') {
                ans.push_back(2);
            } else if (c == '#') {
                ans.push_back(3);
            } else if (d == '#') {
                ans.push_back(4);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[n - i - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
