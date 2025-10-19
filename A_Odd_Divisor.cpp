#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    long long n,m;
    cin>>n;
    while(n%2==0){
        n/=2;
    }
    if(n>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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