#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str = "";
        for (int i = 0 ; i < n; i++){
            int x; cin >> x;
            str += to_string(x);
        }
        set<int> se;
        for (int i = 0; i < str.length(); i++){
            se.insert(str[i] - '0');
        }
        for (auto x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}