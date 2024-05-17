#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
int main() {
    fastread();
    int t;
    cin >> t;
    char s[t];
    cin >> s;
    int num = 0, count = 2;
    while (num <= t) {
        cout << s[num];
        num += count;
        count++;
    }
    return 0;
}
