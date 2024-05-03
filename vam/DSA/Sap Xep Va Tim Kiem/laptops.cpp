#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first != b.first){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    vector<pair<int,int>> ve(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i].first >> ve[i].second;
    }
    sort(ve.begin(), ve.end(), cmp);
    for (int i = 1; i < n; i++){
        if (ve[i - 1].second > ve[i].second){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}