#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int t,f=0;
    cin>>t;
    int arr[t];
    for(int i=0 ; i<t ; i++) cin>>arr[i];
    for(int i=0 ; i<t ; i++){
        if(arr[i]==1){
            f=1;
            break;
        }
    }
    if (f==1) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}