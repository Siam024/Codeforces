#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,sum=0,one=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1)one++;
    }

    //cout<<sum<<" ";
    if(n==0 || sum%3==0){
        cout<<"0"<<endl;
        return;
    }
    for(int i=0 ; i<n ;i++){
        if((sum-a[i])%3==0){
            cout<<"1"<<"\n";
            return;
        }
    }
    if( n==1 || sum%3==2 ||(sum%3==1 && one>0) )cout<<"1"<<endl; 
    else cout<<"2"<<endl;
}

int main()
{
    fastIO;
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}