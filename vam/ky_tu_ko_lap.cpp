#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        map<char, int> mp;
        string a; cin >> a;
        for (int i = 0; i < a.length(); i++){
            mp[a[i]]++;
        }
        for (auto x : a){
            if (mp[x] == 1){
                cout << x;
            }
        }
        cout << endl;
    }
}