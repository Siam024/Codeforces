#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    if((a<b && a>c) || ( a>b && a<c)) cout<<a;
    else if ((b>a && b<c) || (b>c && b<a)) cout<<b;
    else cout<<c;
    cout<<endl;
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