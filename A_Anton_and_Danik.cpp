#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    int n,cntA=0,cntD=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='A')
            cntA++;
        else 
            cntD++;
    }
    if(cntA==cntD)
        cout<<"Friendship";
    else if(cntA>cntD)
        cout<<"Anton";
    else 
        cout<<"Danik";

    return 0;
}