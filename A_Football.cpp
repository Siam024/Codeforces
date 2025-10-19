#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n,cnt1=1,cnt2=0;
    string tmp;
    cin>>n;
    vector<string> v;
    for(int i=0 ; i<n ; i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i=1 ; i<n ; i++){
        if(v[i]==v[0])cnt1++;
        else cnt2++;
    }
    if(cnt1>cnt2)cout<<v[0];
    else {
        for(int i=1 ; i<n ; i++){
            if(v[i]!=v[0]){
                cout<<v[i];
                return 0;
            }
        }
    }
    return 0;
}