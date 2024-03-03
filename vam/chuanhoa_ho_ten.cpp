#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        int k; cin >> k;
        cin.ignore();
    string a; getline(cin , a);
    stringstream ss(a);
    string word;
    vector<string> ve;
    while(ss >> word){
        ve.push_back(word);
    }
    for (auto &x : ve){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        x[0] = toupper(x[0]);
    }
    int n = ve.size();
    string name = "";
    for (int i = 0; i < n - 1; i++){
        name += ve[i] + " ";
    }
    name.pop_back();
    if (k == 1){
        cout << ve[n - 1] << " ";
    for (int i = 0 ; i < n - 1; i++){
        cout << ve[i] << " ";
    }
    } else if (k == 2){
        for (int i = 1 ; i < n; i++){
        cout << ve[i] << " ";
    }
    cout << ve[0];
    }
    cout << endl;
    }
}