#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int s,n;
    cin>>s>>n;
    int a[n][2];
    for(int i=0 ; i<n ; i++){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-1 ; j++){
            if(a[j][0]>a[j+1][0]){
                swap(a[j][0],a[j+1][0]);
                swap(a[j][1],a[j+1][1]);
            }
        }   
    }
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i][0]<<" "<<a[i][1]<<endl;
    // }
    for(int i=0 ; i<n ; i++){
        if(s<=a[i][0]){
            cout<< "NO";
            return 0;
        }
        else {
            s+=a[i][1];
        }
    }
    cout<<"YES";
    return 0;
}