#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    if(n!=5){
        cout<<"NO"<<"\n";
        return;
    }  
    if(s.find('T')!=-1 && s.find('i')!=-1 && s.find('m')!=-1 && s.find('u')!=-1 && s.find('r')!=-1 ){
        cout<<"YES\n";
    }
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