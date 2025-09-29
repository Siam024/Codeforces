#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,k,steps=0;
    cin>>n>>k;
    if(n-k>n/2){
        k=n+1-k;
        steps++;
    } 
    steps+=(n-k);
    cout<<steps<<endl;
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