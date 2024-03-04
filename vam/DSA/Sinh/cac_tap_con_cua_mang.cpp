#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int X[100], ok, n;

void ktao(){
    for (int i = 1; i <= n; i++){
        X[i] = 0;
    }
}

void sinh(){
    int i = n;
     while( i >= 1 && X[i] == 1){
        X[i] = 0;
        i--;
     }
     if (i == 0){
        ok = 0;
     } else {
        X[i] = 1;
     }
}

bool cmp(string a, string b){
    if (a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

int main(){
    int t; cin >> t;
    while(t--){
    cin >> n;
    ktao();
    sinh();
    int a[n];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ok = 1;
    vector<string> ve;
    while(ok){
        string tmp = "";
        for (int i = 1 ; i <= n; i++){
            if (X[i] == 1){
                tmp += to_string(a[i]) + " ";
            }
        }
        ve.push_back(tmp);
        sinh();
    }
    sort(ve.begin(), ve.end(), cmp);
    for (auto x : ve){
        cout << x << endl;
    }
    cout << endl;
    }

}