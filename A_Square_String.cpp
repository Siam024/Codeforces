#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s;
    cin>>s;
    if(s.size()%2==1)cout<<"NO"<<"\n";
    else {
        for(int i=0 ;i<s.size()/2; i++){
            if(s[i]!=s[s.size()/2+i]){
                cout<<"NO"<<"\n";
                return;
            }     
        }
        cout<<"YES"<<"\n";
    }
    
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