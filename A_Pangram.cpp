#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastIO;
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++) s[i]=tolower(s[i]);
    //cout<<s;
    int freq[26];
    for(int i = 0; i < 26; i++)freq[i]=0;
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}