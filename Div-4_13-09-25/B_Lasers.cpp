#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve() {
    int n,m,x,y, cnt=0;
    cin>>n>>m>>x>>y;
    int arr[n],arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0 ;i<n ; i++){
        if (x > arr[i]) cnt++;
        else break;
    }
    for(int i=0 ;i<m ; i++){
        if (y > arr2[i]) cnt++;
        else break;
    }
    cout <<cnt<<"\n";
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