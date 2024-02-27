#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    string a; cin >> a;
    map<char, int> mp;
    for (int i = 0; i < a.length(); i++){
        mp[a[i]]++;
    }
    for (int i = 0; i < a.length(); i++){
        if(mp[a[i]] == 1){
            cout << a[i];
        }
    }
    cout << endl;
    }
}