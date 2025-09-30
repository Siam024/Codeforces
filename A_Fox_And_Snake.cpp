#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int n,m;
    cin>>n>>m;
    for(int r=0; r<n; r++){
        for(int c=0 ;c<m ; c++){
            if (r%2==0)cout<<'#';
            else if((r/2)%2==1 && c==0 )cout<<"#";
            else if((r/2)%2==0 && c==(m-1) )cout<<"#";
            else cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}