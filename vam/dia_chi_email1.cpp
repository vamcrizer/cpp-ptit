#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    cout << ve[n - 1];
    for (int i = 0 ; i < n - 1; i++){
        cout << ve[i][0];
    }
    cout << "@ptit.edu.vn";

}