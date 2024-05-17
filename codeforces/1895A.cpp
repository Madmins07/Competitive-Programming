#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int pos = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] == arr[n - 1]) pos = i;
        }

        if (pos == 0 || n - pos == 0)cout << -1 << endl;
        else {
            cout << pos << " " << n - pos << endl;
            for (int i = 0; i < pos; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
            for (int i = pos; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
