#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    int n,k;
    cin>>n>>k;
    for(int i=0 ; i<k ; i++){
        if(n%10==0)n/=10;
        else n--;
    }
    cout<<n;
    return 0;
}