#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
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
    transform(ve[n - 1].begin(), ve[n - 1].end(), ve[n - 1].begin(), ::toupper);
    string name = "";
    for (int i = 0; i < n - 1; i++){
        name += ve[i] + " ";
    }
    name.pop_back();
    cout << name;
    cout << ", " << ve[n - 1];
}