#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int k;cin >> k;
        priority_queue<int> Q;
        string s; cin >> s;
        map<int,int> mp;
        for (auto x : s){
            mp[x]++;
        }
        for (auto x : s){
            Q.push(mp[x]);
        }
        int cnt = 0;
        while(cnt < k){
            Q.pop();
            cnt++;
        }
        int ans = 0;
        while(!Q.empty()){
            ans += Q.top();
            Q.pop();
        }
        cout << ans << endl;
    }
}