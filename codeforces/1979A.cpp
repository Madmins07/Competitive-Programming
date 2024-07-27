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
        ll int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        set<ll int> ans;
        for (int i = 0; i < n - 1; i++) {
            ans.insert(max({arr[i], arr[i + 1]}));
        }
        cout << *ans.begin() - 1 << endl;
    }
    return 0;
}
