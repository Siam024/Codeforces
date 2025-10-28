#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int a,b,h,nh;
    cin>>a>>b;
    h=min(a,b);
    if(h==a)nh=(b-h)/2;
    else nh=(a-h)/2;
    cout<<h<<" "<<nh;
    return 0;
}