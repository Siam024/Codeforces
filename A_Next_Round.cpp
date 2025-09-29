#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{
    fastIO;
    
    int n,k,cnt=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n, greater<int>());
    int t=arr[k-1];
    for (int i = 0; i < n; i++) if( arr[i]>= t && arr[i] >0 )cnt++;
    
    cout<<cnt;
    
    return 0;
}