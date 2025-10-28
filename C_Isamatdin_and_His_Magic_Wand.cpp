#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int arr[n];
    bool odd=false ,even=false;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]%2==0)even=true;
        else odd=true;
    }
    if(even && odd)sort(arr,arr+n);
    for (int i = 0; i < n; i++)cout<<arr[i]<<" ";
    cout<<"\n";
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