#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    if(x%2==0)cout<<"Malvika";
    else cout<<"Akshat";
    return 0;
}