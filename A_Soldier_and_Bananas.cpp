#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO; 
    int k,n,w,need,total=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        total+=i*k;
    }
    need=total-n;
    if(need<0)cout<<"0";
    else cout<<need ;
    return 0;
}