#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int n,h=0,cnt=0;
    cin>>n;
    int a[n];
    for( int i=0 ; i<n ; i++) cin>>a[i];
    for( int i=0 ; i<n ; i++){
        if(a[i]>h)h=a[i];
    }
    //cout<<h<<endl;
    for( int i=0 ; i<n ; i++){
        cnt+=(h-a[i]);
    }
    cout<<cnt;
    return 0;
}