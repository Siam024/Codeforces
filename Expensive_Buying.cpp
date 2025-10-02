#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n ; i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i = 0; i < k ; i++)cnt+=a[i];
    cout<<cnt<<"\n";
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