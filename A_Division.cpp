#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve() {
    int r;
    cin>>r;
    if(r>=1900)cout<<"Division 1"<<endl;
    else if(r>=1600)cout<<"Division 2"<<endl;
    else if(r>=1400)cout<<"Division 3"<<endl;
    else cout<<"Division 4"<<endl;
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