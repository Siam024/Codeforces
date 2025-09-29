#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=1 ; i<=n ; i++){
        cin >>arr[i];
        arr2[arr[i]]=i;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}