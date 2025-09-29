#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;  
    long long n;
    cin>>n;
    if(n%2==0)cout<<n/2;
    else cout<<"-"<<(n+1)/2;
    return 0;
}