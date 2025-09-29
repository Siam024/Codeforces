


//binary add with carry


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    string s1,s2,c="",res="";
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.size(); i++) c+='0';
    int cnt[s1.size()]={0};
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='1')cnt[i]++;
        if(s2[i]=='1')cnt[i]++;
        if(c[i]=='1')cnt[i]++;
    }
    for(int i=s1.size()-1 ; i >= 0 ; i--){
        if(cnt[i]==0)res+='0';
        else if(cnt[i]==1)res+='1';
        else if(cnt[i]==2){
            res+='0';
            cnt[i-1]++;
        }
        else if(cnt[i]==3){
            res+='1';
            cnt[i-1]++;
        }

    }
    for (int i=res.length()-1; i>=0; i--) {
        cout<<res[i];
    }

    return 0;
}