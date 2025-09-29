#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fastIO;
    string s,tmp="",ans="";
    getline(cin,s);
    for(int i=0; i<s.size(); i++) 
    {
        if(s[i]>='a' && s[i]<='z') tmp+=s[i];
    }
    //cout<<tmp;
    int flag = 0;
    for(int i = 0 ; i < tmp.size() ; i++)
    {
        flag = 0;
        for(int j = 0 ; j < ans.size() ; j++)
        {
            if(tmp[i]==ans[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)continue;
        else ans+=tmp[i];
    }
    cout<<ans.size();
    return 0;
}