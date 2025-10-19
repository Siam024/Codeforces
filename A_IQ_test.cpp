#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,ec=0,oc=0;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++) {
        cin>>a[i];
        if(a[i]%2==0)ec++;
        else oc++;
    }
    if(oc>ec){
        for(int i=0 ; i<n ; i++) {
            if(a[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    } 
    else{
        for(int i=0 ; i<n ; i++) {
            if(a[i]%2==1){
                cout<<i+1;
                break;
            }
        }
    }   
    return 0;
}