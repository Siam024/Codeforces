#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=0;
    for (int i = 0 ; i < n-1 ; i++ ){
        if(s[i]==s[i+1])p++;
    }
    cout<<p;
    return 0;
}