#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> ve;
int X[100];
int n;
void Try(int sum, int i, int val){
    if (sum == n){
        vector<int> tmp (X + 1, X + i);
        ve.push_back(tmp);
        return;
    }
    for (int j = val; j >= 1; j--){
        if (sum + j <= n){
            X[i] = j;
            return Try(sum + j, i + 1, j);
        }
    }
}
int main(){
    cin >> n;
    Try(0, 1, n);
    cout << ve.size() << endl;
    for (auto x : ve){
        cout << "(";
        for (int i = 0; i < x.size(); i++){
            cout << x[i];
            if (i != x.size() - 1){
                cout << " ";
            } else {
                cout << ")";
            }
        }
    }
}