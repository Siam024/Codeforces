#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]<='Z')u++;
        else l++;
    }
    if(u>l) {
        for(int i=0 ; i<s.size() ; i++){
            cout<<(char)toupper(s[i]);
        }
    }   
    else {
        for(int i=0 ; i<s.size() ; i++){
            cout<<(char)tolower(s[i]);
        }
    }
    return 0;
}