#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    char s1[2], s[50];
    while (t--) {
        cin >> s;
        cin >> s1;
        int n = strlen(s);
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            if (s1[0] == s[i]) {
                arr.push_back(i);
            }
        }
        int x = arr.size();
        int flag=0;
        for (int i = 0; i < x; i++) {
            if (arr[i] % 2 == 0 && ((n - arr[i]-1) % 2)==0 ) {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "NO" << endl;
        }
 
    }
    return 0;
}
