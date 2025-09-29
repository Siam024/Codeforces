#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        if(i%2==0)cout<<"I hate ";
        else cout<<"I love ";
        if(i!=t-1)cout<<"that ";
    }
    if(t>0)cout<<"it";
    return 0;
}