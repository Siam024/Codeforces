#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int arr[4],cnt=0;
    for( int i = 0; i < 4; i++) cin>>arr[i];
    for( int i = 1; i < 4; i++){
        if(arr[i]>arr[0])cnt++;
    }
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