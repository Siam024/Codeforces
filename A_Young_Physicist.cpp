#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    int arr[n][3];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++)cin>>arr[i][j];
    }
    for(int i = 0 ; i < n ; i++){
        sum1+=arr[i][0];
        sum2+=arr[i][1];
        sum3+=arr[i][2];
    }
    //cout<<sum<<endl;
    if(sum1==0 && sum2==0 && sum3==0)cout<<"YES";
    else cout<<"NO";

    return 0;
}