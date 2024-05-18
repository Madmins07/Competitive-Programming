#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    char s1[2];
    cin >> s1;
    int flag = 0;
    char s[2];
    for (int i = 0; i < 5; i++) {
 
        cin >> s;
        if (s[0] == s1[0] || s1[1] == s[1]) {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "NO" << endl;
    }
    return 0;
}
