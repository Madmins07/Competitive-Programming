#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int t;
    cin >> t;
    int arr[t][t];
    for(int i=0;i<t;i++){
        arr[0][i]=1;
        arr[i][0]=1;
    }
 
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++) {
            if (j != 0 && i != 0) {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    cout<<arr[t-1][t-1]<<endl;
    return 0;
}
