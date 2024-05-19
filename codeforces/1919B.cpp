#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(string str1,string str2,int m);
int main() {
    fastread();
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '+') count++;
            else count--;
        }
        cout << fabs(count) << endl;
    }
    return 0;
}
