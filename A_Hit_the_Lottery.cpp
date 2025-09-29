#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);

int main() {
    fastIO;
    int a ,total=0 , n=0;
    cin>>a;
    for( ; ; ){
       if(total+100<=a){
           total+=100;
           n++;
        }
       else if(total+20<=a){
           total+=20;
           n++;
        }
       else if(total+10<=a){
           total+=10;
           n++;
        }
       else if(total+5<=a){
           total+=5;
           n++;
        }
       else {
           total++;
           n++;
        }
       if(total==a) break;
    }
    cout<<n;
    return 0;
}