#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    int n,l,tmp,maxDiff=0;
    cin>>n>>l;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());

    for(int i=0 ; i<n-1 ; i++){
        if((v[i+1]-v[i])>maxDiff)maxDiff=(v[i+1]-v[i]);
    }
    int y=max(v[0],l-v[n-1]);
    double y1=(double)y;
    double x=(double)maxDiff/2;
    x=max(x,y1);
    printf("%.10lf",x);
    return 0;
}

//cout<<v[i]<<" ";