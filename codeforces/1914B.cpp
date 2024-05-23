#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int x = n - k;
        int p = k;
        if (k == 0) {
            for (int i = n; i > 0; i--) {
                cout << i << " ";
            }
        } else {
            while (k >= 0) {
                cout << x << " ";
                x++;
                k--;
            }
            for (int i = n - p - 1; i > 0; i--) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
