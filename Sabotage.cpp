#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,x,k,rank=1;
    cin>>n>>x>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n,greater<int>()); 
    for(int i=0;i<k;i++){
        if(arr[i]>x){
            arr[i]=0;
            x+=100;
        }
        else break;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x)rank++;
    }
    cout<<rank<<"\n";
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