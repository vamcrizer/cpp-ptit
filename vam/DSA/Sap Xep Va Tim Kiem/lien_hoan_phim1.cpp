#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    vector<pair<int,int>> ve(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i].first >> ve[i].second;
    }
    sort(begin(ve), end(ve), cmp);
    int cnt = 1, end_time = ve[0].second;
    for (int i = 1; i < n; i++){
        if (ve[i].first >= end_time){
            cnt++;
            end_time = ve[i].second;
        }
    }
    cout << cnt;

}