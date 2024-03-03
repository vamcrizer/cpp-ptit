#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
vector<string> res;
int ok;
// void sinh(int X[], int n, int &ok){
//     int i = n;
//     while(i >= 1 && X[i] == 1){
//         X[i] = 0;
//         i--;
//     }
//     if (i == 0){
//         ok = 0;
//     } else {
//         X[i] = 1;
//     }
// }
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i == -1){
        ok = 0;
    } else {
        s[i] = '1';
    }
}

void init(){
    for (int i = 1; i <= 15; i++){
        ok = 1;
        s = string(i, '0');
        while(ok){
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        res.push_back(s + tmp);
        sinh();
        }
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (auto x : res){
            if (x.size() <= n){
                cout << x << " ";
            } else {
                break;
            }
        }
        cout << endl;

    }
}