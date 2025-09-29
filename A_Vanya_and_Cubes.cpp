#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int sum(int a){
    if (a==1) return 1;
    return a+sum(a-1);
}
int main()
{
    fastIO;
    int n,h=0,i=1;
    cin>>n;
    while(sum(i)<=n){
        n-=sum(i);
        h++;
        i++;
    }
    cout<<h;
    return 0;
}