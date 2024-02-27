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
    char a[200]; cin >> a;
    int l = 0, r = strlen(a) - 1;
    while(l < r){
        char tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l, --r;
    }
    ll num = strtoll(a, NULL, 10);
    cout << num;
}