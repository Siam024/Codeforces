#include<bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
void solve() {
    int n;
    cin >> n;
    vector<int> rn;
    int pos = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            rn.push_back(digit * pos);
        }
        n /= 10;
        pos *= 10;
    }
    cout << rn.size() << "\n";
    if (rn.size()<=2){
        for (int i = rn.size() - 1; i >= 0; i--) {
            cout << rn[i] << " ";
        }
    }
    else{
        for (int i = rn.size() - 2; i >= 0; i--) {
            cout << rn[i] << " ";
        }
        cout<<rn[rn.size()-1];
    }
    cout << "\n";
}
int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}