#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fastIO;   
    int y,tmp,year,flag=0;
    cin>>y;
    int d[4];
    for(int i=y+1 ;i<=10000 ; i++){
        tmp=i;
        year=i;
        flag=0;
        int j=3;
        while(j>=0){
            d[j]=tmp%10;
            tmp/=10;
            j--;
        }
        sort(d,d+4);
        for(int k=0 ; k<3 ; k++){
            if(d[k]==d[k+1]){
                flag=1;
                break;
            }
        }
        if(flag==1)continue;
        else break;
    }
    cout<<year;
    return 0;
}