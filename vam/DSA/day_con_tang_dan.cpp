#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, X[100], a[100];
vector<string> ans;

//use set or below cmp
// bool cmp(vector<int> a, vector<int> b){
//     for (int i = 0; i < min(a.size(), b.size(); i++)){
//         if (a[i] < b[i]){
//             return a[i] < b[i];
//         }
//     }
//     return a.size() < b.size();
// }

void Try(int i, int pos){
    for (int j = pos; j <= n; j++){
        if (X[i - 1] < a[j]){
            X[i] = a[j];
            if (i > 1){
                string tmp = "";
                for (int j = 1; j <= i; j++){
                    tmp += to_string(X[j]) + " ";
                }
                ans.push_back(tmp);
            }
            Try(i + 1, j);
        }
    }
}

void input(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

int main(){
    input();
    Try(1,1);
    sort(ans.begin(), ans.end());
    for (auto x : ans){
        cout << x << endl;
    }
}