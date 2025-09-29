#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO; 
    int n,cnt=0; 
    cin>>n;
    int arr_sum[n]={0};
    for(int i=0 ; i<n ; i++){
        int a[3];
        for(int j=0 ; j<3 ; j++){
            cin>>a[j];
            arr_sum[i]+=a[j];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr_sum[i]>=2)cnt++;
    }
    cout<<cnt;
    return 0;
}