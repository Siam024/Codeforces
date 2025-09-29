#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve() {
    int n , cnt=0;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)-1<<"\n";
    }
    else cout<<n/2<<"\n";
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