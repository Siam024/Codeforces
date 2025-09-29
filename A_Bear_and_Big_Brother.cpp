#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int a,b,cnt=0;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt;
    return 0;
}