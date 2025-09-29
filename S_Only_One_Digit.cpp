#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n,digit;
    cin>>n;
    vector<int> v;
    while(n!=0){
        digit=n%10;
        v.push_back(digit);
        n/=10;
    }
    int min=v[0];
    for (int i=0 ; i<v.size() ; i++){
        if(v[i]<min) min=v[i];
    }
    cout<<min<<"\n";
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