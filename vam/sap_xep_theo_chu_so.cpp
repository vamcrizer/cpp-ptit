#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

bool cmp(string a, string b){
    return (a + b) < (b + a);
}

int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<string> ve;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        ve.push_back(to_string(x));
    }
    sort(ve.begin(), ve.end(), cmp);
    reverse(ve.begin(), ve.end());
    for (auto x : ve){
        cout << x;
    }
    cout << endl;
    }

}