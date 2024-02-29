#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string a; getline(cin, a);
        vector<string> ve;
        stringstream ss(a);
        string word;
        while(ss >> word){
            ve.push_back(word);
        }
        int n = ve.size();
        for (int i = n - 1; i >= 0; i--){
            cout << ve[i] << " ";
        }
        cout << endl;
    }
}