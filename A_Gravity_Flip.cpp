#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0 ; i<n ; i++)cout<<arr[i]<<" ";
    return 0;
}