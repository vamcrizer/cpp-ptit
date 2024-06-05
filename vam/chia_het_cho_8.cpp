#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int fix(string s, int n, int k){
    int res = 0;
    for (int i = 0; i < n; i++){
        int tmp = 0;
        for (int j = i; j < n; j++){
            tmp = tmp * 10 + (s[j] - '0');
            tmp %= k;
            if (tmp == 0){
                res++;
            }
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        cout << fix(s,n,8) - fix(s,n,24) << endl;
    }
}