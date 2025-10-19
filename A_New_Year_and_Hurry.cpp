#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int n,k,tmp=0,ans=0;
    cin>>n>>k;
    for(int i=1 ; i<=n ; i++){
        tmp+=(i*5);
        if(tmp+k>240)break;
        ans=i;
    }
    cout<<ans;
    return 0;
}