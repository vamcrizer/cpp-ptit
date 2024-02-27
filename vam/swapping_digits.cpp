#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    string s; cin >> s;
    string tmp;
    int cnt;
    tmp = s;
    int ok = 0;
    while(1){
        cnt = 0;
        prev_permutation(tmp.begin(), tmp.end());
        for (int i = 0; i < tmp.length(); i++){
            if (tmp[i] != s[i]){
                cnt++;
            }
        }
        if (cnt == 2){
            ok = 1;
            break;
        }
        if (tmp >= s){
            ok = 0;
            break;
        }
    }
    if (ok){
        cout << tmp << endl;
    } else {
        cout << -1 << endl;
    }
    }
}