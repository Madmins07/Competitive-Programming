#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=0;i<n;i++){
            if(i%2==0) {
                for (int j = 0; j < n; j++) {
                    if (j % 2 == 0) {
                        cout << "##";
                    } else {
                        cout << "..";
                    }
                }
                cout << "\n";
                for (int j = 0; j < n; j++) {
                    if (j % 2 == 0) {
                        cout << "##";
                    } else {
                        cout << "..";
                    }
                }
                cout << "\n";
            }else{
                for (int j = 0; j < n; j++) {
                    if (j % 2 != 0) {
                        cout << "##";
                    } else {
                        cout << "..";
                    }
                }
                cout << "\n";
                for (int j = 0; j < n; j++) {
                    if (j % 2 != 0) {
                        cout << "##";
                    } else {
                        cout << "..";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
