#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool isPrime(long long num) {
    if (num<2)return false;
    for (long long i=2; i*i<=num; ++i) {
        if (num%i==0)  return false;
    }
    return true;
}
int main()
{
    fastIO;
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0 ;i<n;i++){
        cin>>a[i];
        long long x=sqrtl(a[i]);
        if(x*x==a[i] && isPrime(x))cout<<"YES\n";
        else cout<<"NO\n";    
    }
    return 0;
}