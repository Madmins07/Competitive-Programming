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
        map<int, int> ans;
        for (int i = 0; i < n; i++) {
            cin >> x;
            ans[x]++;
        }
        int sum = 0;
        for (auto itr = ans.begin(); itr != ans.end(); itr++) {
            if (itr->first <= 2 && itr->second > 1) {
                if (itr->second % 2 == 0) {
                    sum += (itr->second / 2) * (itr->first);
                } else {
                    sum += ((itr->second / 2)) * (itr->first) + 1;
                }
            } else {
                sum += itr->second;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
