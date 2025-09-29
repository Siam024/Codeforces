#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    string s,s1;
    cin>>s;
    cin>>s1;
    if(s.size()!=s1.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0 ; i<s.size(); i++){
        if(s[i]!=s1[s1.size()-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
    return 0;
}