#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        set<int> ans;
        map<int, int> key;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            ans.insert(arr[i]);
            key[arr[i]]++;
        }
        int n = ans.size();
        if (n == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for (auto itr = ans.rbegin(); itr != ans.rend(); itr++) {
                cout << *itr << " ";
            }
            for (auto itr = key.rbegin(); itr != key.rend(); itr++) {
                for (int i = itr->second; i > 1; i--)cout << itr->first << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
