#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    string s;
    int cnt=0,tmp[5]={0};
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
            for(int j=i+1; j<s.size(); j++){
                if(s[j]=='e'){
                    for(int k=j+1; k<s.size(); k++){
                        if(s[k]=='l'){
                            for(int l=k+1; l<s.size(); l++){
                                if(s[l]=='l'){
                                    for(int m=l+1; m<s.size(); m++){
                                        if(s[m]=='o'){
                                            cout<<"YES";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}