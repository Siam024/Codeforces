#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        int x=s[i]-'0';
        if(x>4)s[i]='9'-x;
    }
    if(s[0]=='0')s[0]='9';
    cout<<s;
    return 0;
}