#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main() {
    fastread();
    int r,c,x,y;
    cin>>r>>c;
    char ans[r][c];
    set<int> row,column;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ans[i][j];
            if(ans[i][j]=='S'){
                row.insert(i);
                column.insert(j);
            }
        }
    }
    x=row.size();
    y=column.size();
    cout<<(r-x)*c+(c-y)*r-((r-x)*(c-y))<<endl;
}
