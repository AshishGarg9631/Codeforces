#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a[num]++;
    }
    c=0;
    if(a[3]>a[1] && a[1]!=0 && a[3]!=0){
        c=c+a[1];
        a[3]=a[3]-a[1];
        a[1]=0;
    }
    else if(a[1]!=0 && a[3]!=0){
        c=c+a[3];
        a[1]=a[1]-a[3];
        a[3]=0;
    }
    c+=a[2]/2;
    a[2]=a[2]%2;
    if(a[1]!=0&&a[2]!=0){
        c=c+a[2];
        a[1]=a[1]-a[2];
        a[2]=0;
        if(a[1]!=0)
            a[1]--;
    }
    if(a[1]!=0){
        c=c+a[1]/4;
        if(a[1]%4!=0)
            a[1]=1;
        else
            a[1]=a[1]%4;
    }
    c=c+a[1]+a[2]+a[3]+a[4];

    cout<<c<<"\n";
    return 0;
}
