#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, k;
    cin >> t;
    while (t--) {
        cin >> k;
        string s;
        map<char, int> ans;
        for (int i = 0; i < k; i++) {
            cin >> s;
            const int n = s.size();
            for (int i = 0; i < n; i++) {
                ans[s[i]]++;
            }
        }
        int flag = 0;
        for (auto itr = ans.begin(); itr != ans.end(); itr++) {
            if (itr->second % k != 0) {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
