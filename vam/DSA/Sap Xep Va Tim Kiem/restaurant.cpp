#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    vector<pair<int,int>> ve;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        ve.push_back({x,1});
        ve.push_back({y,-1});
    }
    sort(ve.begin(), ve.end());
    int ans = 0, cnt = 0;
    for (auto it : ve){
        cnt += it.second;
        ans = max(ans,cnt);
    }
    cout << ans;
}