#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    string s;
    int cnt=0;
    cin>>s;
    
    for(char c : s) if(isupper(c))cnt++;
    if(cnt==s.size()){
        for(char &c : s)c=tolower(c);
        cout<<s;
        return 0;
    }
    cnt=0;
    for(int i=1 ; i<s.size() ; i++)if(isupper(s[i]))cnt++;
    if(islower(s[0]) && cnt==s.size()-1){
        s[0]=toupper(s[0]);
        for(int i=1 ; i<s.size() ; i++)s[i]=tolower(s[i]);
        cout<<s;
        return 0;
    }
    cout<<s;
    return 0;
}