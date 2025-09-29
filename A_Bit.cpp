#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int t;
    cin>>t;
    int p=0,m=0;
    for(int i=0 ; i<t ; i++){
        string op;
        cin>>op;
        if(op[1]=='+')p++;
        else m++;
    }
    int res=0+p-m;
    cout <<res;
    return 0;
}