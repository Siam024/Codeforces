#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
int32_t main()
{
    fastIO;
    int n,m,pos=1,unit=0;
    cin>>n>>m;
    int a[m];
    for(int i=0 ; i<m ; i++)cin>>a[i];
    for(int i=0 ; i<m ; i++){
        if(pos==a[i])continue;
        else if(pos>a[i]){
            unit+=((n-pos)+a[i]);
            pos=a[i];
        }
        else{
            unit+=(a[i]-pos);
            pos=a[i];
        }
        //cout<<pos<<" "<<unit<<endl;
    }
    cout<<unit;
    return 0;
}