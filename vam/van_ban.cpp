#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    map<string,int> mp;
    int n; cin >> n;
    vector<string> ve(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i];
    }
    for (int i = 0; i < n; i++){
        string tmp = ve[i];
        sort(tmp.begin(), tmp.end());
        if (mp[tmp] == 0){
            mp[tmp].first += ve[i];
        }
    }
}