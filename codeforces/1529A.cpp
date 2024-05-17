#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x = 101, y;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> y;
            arr[i] = y;
            if (y < x) x = y;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > x) count++;
        }
        cout << count << endl;
    }
    return 0;
}
