#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;  
    int a[4],cnt=4;
    for(int i=0; i < 4; i++)cin>>a[i];
    sort(a , a+4);
    for(int i=0; i < 3; i++)
    {
        //cout<<a[i];
        if(a[i]==a[i+1])cnt--;
    }
    cout<<4-cnt;
    return 0;
}