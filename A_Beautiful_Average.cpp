#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++)cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    cout<<arr[0]<<"\n";
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