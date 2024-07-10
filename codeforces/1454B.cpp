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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> x;
            arr[i] = x;
            ans[x]++;
        }
        int key = -1, flag = 0;
        for (auto itr = ans.begin(); itr != ans.end(); itr++) {
            if (itr->second == 1) {
                key = itr->first;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << -1 << endl;
        }
    }
    return 0;
}
