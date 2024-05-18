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
        int arr[n * 2];
        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < 2 * n; i++) {
            for (int j = i + 1; j < 2 * n; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = -1;
                }
            }
        }
        for (int i = 0; i < 2 * n; i++) {
            if (arr[i] != -1) {
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
 
    }
    return 0;
}
