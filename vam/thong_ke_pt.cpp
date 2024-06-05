#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;



int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; t = 1;
    while(t--){
        map<int,int> mp;
        int tmp;
        vector<int> ve;
        while(cin >> tmp){
            mp[tmp]++;
            ve.push_back(tmp);
        }
        for (auto it : ve){
            if (mp[it] != 0){
                cout << it << " " << mp[it] << endl;
                mp[it] = 0;
            }
        }
    }
}