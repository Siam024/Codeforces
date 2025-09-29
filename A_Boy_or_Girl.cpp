#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    string s;
    cin>>s;
    vector<int> v;
    v.push_back(s[0]);
    for(int i=0 ; i<s.size() ; i++){
        int f=0;
        for(int j=0 ;j<v.size() ; j++){
            if(s[i]==v[j]){
                f=1;
                break;
            }
        }
        if(f!=1) v.push_back(s[i]); 
    }
    //cout<<v.size()<<"\n";
    if(v.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}