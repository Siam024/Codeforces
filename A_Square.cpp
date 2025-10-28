#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && a==c && a==d)cout<<"YES\n";
    else cout<<"NO\n";
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