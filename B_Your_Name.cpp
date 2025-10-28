#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)cout<<"YES\n";
    else cout<<"NO\n";
//     cout<<s<<" "<<t<<endl;
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