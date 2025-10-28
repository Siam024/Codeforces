#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int a,b,c,d,cal=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='1')cal+=a;
        else if(s[i]=='2')cal+=b;
        else if(s[i]=='3')cal+=c;
        else cal+=d;
    }
    cout<<cal;
    return 0;
}