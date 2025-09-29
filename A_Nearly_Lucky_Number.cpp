#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    long long n;
    int digit,cnt=0;
    cin>>n;
    vector<int> v;
    while (n!=0) {
        digit=n%10;
        v.push_back(digit);
        n/=10;
    }
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==7 || v[i]==4) cnt++;
    }
    if(cnt==4 || cnt==7 )cout<<"YES";
    else cout<<"NO";
    return 0;
}