#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,a,b;
    cin>>n;
    if(n%3==1)cout<<(n/3)+1<<" "<<(n/3);
    else if(n%3==2)cout<<(n/3)<<" "<<(n/3)+1;
    else cout<<(n/3)<<" "<<(n/3);
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