#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,m,l,k,c,i,j;
    cin>>n>>m;
    char a[n][m];
    l=0,k=0,c=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]=='B'){
                c++;
                k=j;
            }
        }
        if(c>0){
            l=i;
            break;
        }
    }
    if(c==1)
        cout<<l<<" "<<k<<"\n";
    else
        cout<<l+c/2<<" "<<k-c/2<<"\n";
    return 0;
}
