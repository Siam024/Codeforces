#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,x,fi,li;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i < n ; i++)cin>>a[i];
    for(int i = 0; i < n ; i++){
        if(a[i]==1){
            fi=i;
            break;
        }
    }
    for(int i = n-1; i >= 0 ; i--){
        if(a[i]==1){
            li=i;
            break;
        }
    }
    //cout<<li<<" "<<fi<<" ";
    if((li-fi+1)>x)cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
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