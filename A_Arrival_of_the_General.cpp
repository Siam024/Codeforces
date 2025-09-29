#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int max_index(int arr[] ,int n){
    
}
int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int hI = 0 ,high =arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]>high){
            high=arr[i];
            hI=i;
        }
    }
    int lI = 0 ,low =arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]<=low){
            low=arr[i];
            lI=i;
        }
    }
    //cout<<hI<<" "<<lI<<endl;
    if (hI>lI)  cout<< hI+(n-1-lI)-1;
    else cout<< hI+(n-1-lI); 
    return 0;
}