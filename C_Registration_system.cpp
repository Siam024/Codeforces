


//unsolved - TLE ( have to use map )


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector <string> v;
void solve() {
    string s,tmp="";
    int cnt=0;
    cin>>s;
    for(int i=0 ; i<v.size();i++){
        if(!isalpha(v[i][v[i].size()-1])){
            if(s==v[i].substr(0,s.size()))cnt++;
        }
        else{
            if(s==v[i])cnt++;
        }           
    } 
    if(cnt==0) {
        tmp = s;
        cout<<"OK"<<"\n";
    }
    else {
        tmp = s+to_string(cnt);
        cout<<tmp<<'\n';        
    }
    v.push_back(tmp);   
}

int main()
{
    fastIO;    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}