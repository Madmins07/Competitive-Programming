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
        int arr[k], pos1, pos2, flag = 1;
        for (int i = 0; i < k; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                pos2 = i;
            }
            if (arr[i] == 1 && flag == 1) {
                pos1 = i;
                flag = 0;
            }
        }
        int count = 0;
        for (int i = pos1; i < pos2; i++) {
            if (arr[i] == 1) count++;
        }
        cout << pos2 - pos1 - count << endl;
    }
    return 0;
}
