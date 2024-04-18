#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<string> ve(n);
    vector<string> ve2(n);
    for (int i = 0; i < n; i++){
        cin >> ve[i];
        ve2[i] = ve[i];
    }
    for (int i = 0; i < n; i++){
        sort(ve2[i].begin(), ve2[i].end());
    }
    sort(ve2.begin(), ve2.end());
    for (auto x : ve2){
        cout << x << " ";
    }
    string tmp = "";
    
}