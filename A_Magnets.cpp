#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,cnt=1;
    cin>>n;
    string a[n];
    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int i=0 ; i<n-1 ; i++){
        if(a[i+1]==a[i])continue;
        cnt++;
        
    } 
    cout<<cnt;
    return 0;
}