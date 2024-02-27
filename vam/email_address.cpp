#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int main(){
    string a; getline(cin, a);
    stringstream ss(a);
    string word;
    vector<string> ve;
    while(ss >> word){
        ve.push_back(word);
    }
    for (auto &x : ve){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
    }
    int n = ve.size();
    for (int i = 0; i < ve.size() - 1; i++){
        cout << ve[i][0];
    }
    cout << ve[n - 1] << "@ptit.edu.vn";
}