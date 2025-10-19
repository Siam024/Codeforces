#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,h=0;
    cin>>n;
    int arr[n][2];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++)cin>>arr[i][j];
    }
    int tmp[n+1]={0};
    for(int i = 0 ; i < n ; i++){
        tmp[i+1]=tmp[i]+arr[i][1]-arr[i][0];
        //cout<<tmp[i]<<" ";
    }
    for(int i = 1 ; i < n ; i++){
        if(tmp[i]>h)h=tmp[i];
    }
    cout<<h;
    return 0;
}