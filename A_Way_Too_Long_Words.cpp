#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve() {
    string s;
    cin>>s;
    if(s.size()>10){
        cout<<s[0];
        cout<<s.size()-2;
        cout<<s[s.size()-1]<<endl;
    }
    else cout<<s<<endl;
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