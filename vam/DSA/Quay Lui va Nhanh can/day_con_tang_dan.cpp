#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, X[1005], a[1005];
vector<ll> res;

void Try(int i, int pos){
    int ok = 0;
    for (int j = pos; j <= n; j++){
        if (X[i - 1] < a[j]){
            ok = 1;
            X[i] = a[j];
            if (i > 1){
                int tmp = 0;
                for (int j = 1; j <= i; j++){
                    tmp += X[j];
                }
                res.push_back(tmp);
            }
            Try(i + 1, j);
        }
        
    }
    if (!ok){
            res.push_back(a[1]);
        }
}

void input(){
    res.clear();
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
    input();
    Try(1,1);
    cout << *max_element(begin(res), end(res)) << endl;
    }
}