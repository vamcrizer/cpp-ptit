#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int sum_of_digit(string a){
    int sum = 0;
    for (int i = 0 ; i < a.length(); i++){
        sum += a[i] - '0';
    }
    return sum;
}

int main(){
    int n, s; cin >> n >> s;
    int start = pow(10,n-1);
    int end = start*10;
    int res1 = -1, res2 = -1;
    for (int i = start; i <= end; i++){
        if (sum_of_digit(to_string(i)) == s){
            res1 = i;
            break;
        }
    }
    for (int i = end; i >= start; i--){
        if (sum_of_digit(to_string(i)) == s){
            res2 = i;
            break;
        }
    }
    cout << res1 << " " << res2;
}