#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int a,b,c,n1,n2,n3,n4;
    cin>>a;
    cin>>b;
    cin>>c;
    n1=a+b+c;
    n2=a*b*c;
    n3=(a+b)*c;
    n4=a*(b+c);
    //cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
    if(n1>=n2 && n1>=n3 && n1>=n4)cout<<n1;
    else if(n2>=n1 && n2>=n3 && n2>=n4)cout<<n2;
    else if(n3>=n1 && n3>=n2 && n3>=n4)cout<<n3;
    else cout<<n4;
    return 0;
}