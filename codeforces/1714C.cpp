#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
 
        if (n <= 9) {
            cout << n << endl;
        } else {
            int left = n, dig = 9, x = 0, newe = 0;
            while (left != 0) {
                newe += dig * (int) pow(10, x);
                left -= dig;
                x++;
                dig--;
                if (left < dig) {
                    dig = left;
                }
            }
            cout << newe << endl;
            
        }
    }
    return 0;
}
