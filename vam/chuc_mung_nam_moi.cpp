#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    cin.ignore();
    set<string> se;
    while(t--){
        string a; getline(cin, a);
        se.insert(a);
    }
    cout << se.size();
}