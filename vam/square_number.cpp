#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};

bool check(int n){
    if (floor(sqrt(n)) == ceil(sqrt(n))){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    ll sum = 0;
    for (int i = a; i <= b; i++){
        if (check(i)){
            sum += i;
        }
    }
    cout << sum;
}
