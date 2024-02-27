#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

void standardlize(string &a){
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    a[0] = toupper(a[0]);
}

int main(){
    string name = "nGuyEn  vaN    biNH";
    stringstream ss(name);
    string ten;
    vector<string> hoten;
    while(ss >> ten){
        hoten.push_back(ten);
    }
    for (auto &x : hoten){
        standardlize(x);
    }
    name = "";
    for (auto x : hoten){
        name += x + " ";
    }
    name.pop_back();
    cout << name;
}