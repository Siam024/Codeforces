#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n;
    cin>>n;
    int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0 ;i<14 ; i++){
        if(n%a[i]==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}