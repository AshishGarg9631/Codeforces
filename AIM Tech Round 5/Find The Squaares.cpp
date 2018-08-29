#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,i,j,x1=inf,x2=-inf,y1=inf,y2=-inf;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='B'){
                y1=min(y1,i);
                x1=min(x1,j);
                y2=max(y2,i);
                x2=max(x2,j);
            }
        }
    }
    cout<<(y2+y1)/2 + 1<<" "<<(x2+x1)/2 + 1<<"\n";
    return 0;
}
