#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    string s,tmp="";
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++){  
        if(s[i]!='W' && s[i+1]!='U' && s[i+2]!='B')flag++;     
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(flag>0 && (tmp[tmp.size()-1]!=' '))tmp+=" ";
            i+=2;
            flag++;
        }         
        else tmp+=s[i];
    }  
    cout<<tmp;
    return 0;
}