#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    string s;
    int cnt=1;
    cin>>s;
    for(int i = 0 ; i < s.size()-1 ; i++){
        if(s[i]==s[i+1])cnt++;
        else cnt=1;
        if(cnt==7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}