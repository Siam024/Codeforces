


//unsolved

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;   
    int y,tmp=0;
    cin>>y;
    int d[4];
    for(int i=y+1 ;y<=9000 ; y++){
        tmp=i;
        int j=3;
        while(j>0){
            d[j-1]=tmp%10;
            tmp/=10;
            j--;
        }
        for(int i=0 ; i<4 ; i++){
            if(d[i]
        } 
    }

    for(int i=0 ; i<4 ; i++){
        cout<<d[i];
    }
        

    return 0;
}