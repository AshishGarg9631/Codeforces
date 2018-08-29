#include<bits/stdc++.h>
using namespace std;
int main(){
    float min1,max1;
    int n,l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    max1=-1;
    for(int i=a[0];i<a[n];i++)
        if(max1<a[i+1]-a[i])
            max1=a[i+1]-a[i];
    min1=max1/2;
    if(min1<(a[0]-0))
        min1=a[0]-0;
    else if(min1<(l-a[n-1]))
            min1=l-a[n-1];
        else
            min1=max1/2;
    cout<<fixed<<setprecision(10)<<min1<<"\n";
    return 0;
}
