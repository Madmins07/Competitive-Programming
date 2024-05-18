#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i * i + j == n && i + j * j == m) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
