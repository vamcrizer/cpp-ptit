#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(){
    int t; cin >> t;
    while(t--){
    map <int,int> mp;
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    vector<pair<int,int>> ve;
    for (auto it : mp){
        ve.push_back(it);
    }
    sort(begin(ve), end(ve), cmp);
    for (auto it : ve){
        for (int j = 0; j < it.second; j++){
            cout << it.first << " ";
        }
    }
    cout << endl;
    }
}