#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n,h,cnt=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    for(int i=0 ; i<n ; i++){
        if(arr[i]>h)cnt+=2;
        else cnt++;
    }
    cout<<cnt;
    return 0;
}