#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1e6 + 5;
const int MOD = 1e9 + 7;

int a[MX];
void sang(){
    for (int i = 2; i <= sqrt(MX); i++){
        if (!a[i]){
            for (int j = i * i; j <= MX; j+=i){
                a[j] = 1;
            }
        }
    }
}
int main(){
    sang();
    ll n; cin >> n;
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (!a[i]){
            if (i*i*i*i <= sqrt(n)){
                cnt++;
            } else {
                break;
            }
        }
    }
    for (int i = 2; i <= sqrt(n); i++){
        for (int j = i + 1; j <= sqrt(n); j++){
            if (!a[i] && !a[j] && i*j <= sqrt(n)){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}