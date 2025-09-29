

//unsolved


#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int n,sum1=0,sum2=0,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0 ; i<n ; i++){
        sum1+=arr[i];
        if(i+1!=n){
            for(int j=i+1 ; j<n ; j++){
                sum2+=arr[j];
            }
        }
        if(sum1>sum2){
            cnt++;
            break;
        }
        else if(sum1==sum2){
            cnt+=2;
            break;
        }
        else cnt++;         
    }
    cout<<cnt;
    return 0;
}