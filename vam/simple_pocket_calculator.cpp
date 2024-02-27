#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
        vector<string> ve;
        string c; getline(cin, c);
        stringstream ss(c);
        while(ss >> c){
            ve.push_back(c);
        }
        double so1 = stod(ve[0]);
        double so2 = stod(ve[2]);
        if (ve[1] == "+"){
        cout << fixed << setprecision(2) << so1 + so2;
        } else if (ve[1] == "-"){
        cout << fixed << setprecision(2) << so1 - so2;
        } else if (ve[1] == "*"){
        cout << fixed << setprecision(2) << so1 * so2;
        } else if (ve[1] == "/"){
        cout << fixed << setprecision(2) << so1 / so2;
        }
}