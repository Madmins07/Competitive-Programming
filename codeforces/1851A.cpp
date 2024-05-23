#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n, m, k, h;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k >> h;
        int x, count = 0, temp = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            for (int j = 1; j <= m; j++) {
                for (int g = 1; g <= m; g++) {
                    if (j != g) {
                        if (fabs(h - x) == fabs(k * (g - j))) {
                            count++;
                            break;
                        }
                    }
                }
                if (count != temp) {
                    temp = count;
                    break;
                }
            }
        }
        cout << count << endl;

    }
    return 0;
}
