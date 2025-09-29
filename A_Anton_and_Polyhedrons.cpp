#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,cnt=0;
    cin>>n;
    string s[n];
    for(int i=0 ; i<n ; i++)cin>>s[i];
    for(int i=0 ; i<n ; i++){
        if(s[i]=="Tetrahedron")cnt+=4;
        else if(s[i]=="Cube")cnt+=6;
        else if(s[i]=="Octahedron")cnt+=8;
        else if(s[i]=="Dodecahedron")cnt+=12;
        else if(s[i]=="Icosahedron")cnt+=20;
        
    }
    cout<<cnt;
    return 0;
}