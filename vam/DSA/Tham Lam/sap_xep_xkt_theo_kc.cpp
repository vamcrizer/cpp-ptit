#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int d; string s;
        cin >> d >> s;
        map<char,int> mp;
        vector<pair<char,int>> ve;
        for (auto x : s){
            mp[x]++;
        }
        for (auto it : mp){
            ve.push_back(it);
        }
        int n = s.size();
        bool ok = true;
        string res = string(n, ' ');
        sort(ve.begin(), ve.end(), cmp);
        for (int i = 0; i < ve.size(); i++){
            int pos = i;
            while(res[pos] != ' '){
                pos++;
            }
            for (int k = 0; k < ve[i].second; k++){
                if (pos + k * d >= n){
                    ok = false;
                    break;
                }
                res[pos + k * d] = ve[i].first;
            }
        }
        if (!ok){
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}