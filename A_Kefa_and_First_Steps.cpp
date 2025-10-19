#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n,h=1,cnt=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)cin>>arr[i];
    for(int i=0; i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
            if(cnt>h)h=cnt;
        }
        else cnt=1;
    }
    cout<<h;
    return 0;
}