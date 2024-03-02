#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        map<char, int> mp;
        for (int i = 0; i < a.length(); i++){
            mp[a[i]]++;
        }
        for (int i = 0; i < a.length(); i++){
            if (mp[a[i]] != 0){
            cout << a[i] << mp[a[i]];
            mp[a[i]] = 0;
            }
        }
        cout << endl;
    }
}