#include <bits/stdc++.h>
using namespace std;
using ll = long long;
<<<<<<< HEAD
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
=======

int main(){
    int n; cin >> n;
    vector<string> ve(n);
    vector<string> ve2(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i];
        ve2[i] = ve[i];
    }
    for (int i = 0; i < n; i++){
        sort(ve2[i].begin(), ve2[i].end());
    }
    sort(ve2.begin(), ve2.end());
    for (auto x : ve2){
        cout << x << " ";
    }
    string tmp = "";
    
>>>>>>> 3157b4f3bafe830a150c33c7cc4a3959ec172c28
}