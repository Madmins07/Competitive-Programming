#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    double a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        double temp = fabs((b - a) / 2.0);
        int moves = 0;
        if (a > b) {
            while (a != b) {
                if (temp >= c) {
                    a -= c;
                    b += c;
 
                } else {
                    a -= temp;
                    b += temp;
                }
                moves++;
                temp -= c;
            }
        } else {
            while (a != b) {
                if (temp >= c) {
                    b -= c;
                    a += c;
                } else {
                    a += temp;
                    b -= temp;
                }
                moves++;
                temp -= c;
            }
 
        }
        cout << moves << endl;
    }
    return 0;
}
