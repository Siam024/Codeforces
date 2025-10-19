#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n,one=0,two=0,three=0,four=0,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ;i++)cin>>a[i];
    for(int i=0 ; i<n ;i++){
        if(a[i]==1)one++;
        else if(a[i]==2)two++;
        else if(a[i]==3)three++;
        else four++;
    }
    //cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
    cnt+=four;
    int x=min(one,three);
    cnt+=x;
    one-=x;
    three-=x;
    cnt+=three;
    cnt+=(two/2);
    two=two%2;
    int y=min(two,(one+1)/2);
    cnt+=y;
    two-=y;
    //cout<<two<<endl;
    one-=(y*2);
    cnt+=two;
    cnt+=((one+3)/4);
    cout<<cnt;
    return 0;
}