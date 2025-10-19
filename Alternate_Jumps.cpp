#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,pos,step;
    cin>>n;
    pos=n;
    for(int i=1 ; i<n ;i++){
        step=n-i;
        if(i%2==1)pos-=step;
        else pos+=step;
    }
    cout<<pos<<"\n";
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