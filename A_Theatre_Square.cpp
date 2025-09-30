#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<((n+a-1)/a)*((m+a-1)/a);
    return 0;
}