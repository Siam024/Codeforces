#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0 ; i<n ; i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0 ; i<k ; i++){
        if(a[i]<0)cnt+=a[i]*-1;
        else break;
    }
    cout<<cnt;
    return 0;
}