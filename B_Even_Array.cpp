#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,odd=0,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i]%2) odd++;
    }
    //for(int i=0 ; i<n ; i++)cout<<a[i]<<" ";
    //cout<<odd<<" ";

    if((n%2==0 && odd!=(n-odd)) || (n%2==1 && odd!=(n-odd-1))){
        cout<<"-1"<<"\n";
        return;
    }
    for(int i=0 ; i<n ; i++){
        if(i%2!=a[i]%2){
            cnt++;
        }
    }
    //cout <<cnt; 
    cout<<cnt/2<<"\n";

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