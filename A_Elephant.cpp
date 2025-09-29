#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;
    
    int t,d=0,steps=0;
    cin>>t;
    for( ; ; ){
        if(d+5<=t){
            d+=5;
            steps++;
        }
        else if(d+4<=t){
            d+=4;
            steps++;
        }
        else if(d+3<=t){
            d+=3;
            steps++;
        }
        else if(d+2<=t){
            d+=2;
            steps++;
        }
        else if(d+1<=t){
            d+=1;
            steps++;
        }
        if (d==t)break;
    }
    cout<<steps;
    return 0;
}