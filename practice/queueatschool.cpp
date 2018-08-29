#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        int j=0;
        while(j<n-1){
            if(s[j]=='B'&& s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j+=2;
            }
            else
                j++;
        }
    }
    cout<<s<<"\n";
    return 0;
}
