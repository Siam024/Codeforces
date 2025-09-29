#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n; 
    double sum=0;
    cin>>n;
    double arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double ans=sum/n;
    printf("%.12f",ans);
    return 0;
}