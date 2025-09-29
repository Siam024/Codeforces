#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)cout<<c;
    else if(b==c)cout<<a;
    else cout<<b;
    cout<<"\n";
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