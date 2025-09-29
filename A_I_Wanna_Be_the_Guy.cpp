#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    int l,x;
    cin>>l;
    int arr[l];
    for(int i=0 ;i<l; i++)arr[i]=1;
    vector<int> v1;
    while(cin>>x && x!=-1){
        v1.push_back(x);
    }
    vector<int> v2;
    while(cin>>x && x!=-1){
        v2.push_back(x);
    }
    for (int i = 1 ;i<v1.size(); i++){
        arr[v1[i]-1]=2;
    }
    for (int i = 1 ;i<v2.size(); i++){
        arr[v2[i]-1]=2;
    }
    // for(int i=0 ; i<l ; i++){
    //     cout<<arr[i];
    // }
    for(int i=0 ; i<l ; i++){
        if(arr[i]==1 || v1.size()+v2.size()-2<l){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}