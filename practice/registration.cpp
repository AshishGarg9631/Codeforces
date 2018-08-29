#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pr pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for(int i=0;i<n;i++) {
    	string s;
    	cin>>s;
    	if(m.find(s)!=m.end()){
            string a=to_string(m[s]);
            m[s]++;
            cout<<s+a<<"\n";
    	}
    	else
    	{
            m[s]++;
            cout<<"OK"<<"\n";
        }
    	}
    return 0;
}
