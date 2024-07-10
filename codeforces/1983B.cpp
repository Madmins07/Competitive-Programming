#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
bool canConvert(vector<string>& a, vector<string>& b, int n, int m) {
    
    auto applyOperation = [&](int x1, int y1, int x2, int y2) {
      
        a[x1][y1] = (a[x1][y1] - '0' + 1) % 3 + '0';
        a[x2][y2] = (a[x2][y2] - '0' + 1) % 3 + '0';
      
        a[x1][y2] = (a[x1][y2] - '0' + 2) % 3 + '0';
        a[x2][y1] = (a[x2][y1] - '0' + 2) % 3 + '0';
    };
 
  
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            while (a[i][j] != b[i][j]) {
                applyOperation(i, j, i + 1, j + 1);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i][m - 1] != b[i][m - 1]) return false;
    }
    for (int j = 0; j < m; ++j) {
        if (a[n - 1][j] != b[n - 1][j]) return false;
    }
 
    return true;
}
 
int main() {
    fastread();
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<string> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
 
        if (canConvert(a, b, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
