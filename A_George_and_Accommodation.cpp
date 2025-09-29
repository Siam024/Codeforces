#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{
    fastIO;
    int t;
    cin>>t;
    int cnt=0;
    int arr[t],arr2[t];
    for(int i=0 ; i<t ; i++) cin>>arr[i]>>arr2[i];
    for(int i=0 ; i<t ; i++){
        if(arr2[i]-arr[i]>=2)cnt++;
        //cout<<arr2[i]-arr[i]<<endl;
    }
    cout<<cnt;
    return 0;
}