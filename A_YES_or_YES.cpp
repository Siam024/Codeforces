#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        s[i]=tolower(s[i]);
    }
    if(s=="yes")cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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