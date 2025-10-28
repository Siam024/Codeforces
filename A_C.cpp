#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int a,b,n,tmp=0,step=0;
    cin>>a>>b>>n;
    while(tmp<=n){
        if(a<b)a+=b;
        else b+=a;
        tmp=max(a,b);
        step++;
    }
    cout<<step<<"\n";
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