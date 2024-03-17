#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binPow(int a, int b){
	if(b == 0) return 1;
	int x = binPow(a, b / 2);
	if(b % 2) return x * x * a;
	else return x * x;
}

int nt(ll m){
	if(m == 2 || m == 3){
		return 1;
	}
	if(m % 2 == 0 || m % 3 == 0 || m < 2){
		return 0;
	}
	for(ll i1 = 5; i1 * i1 <= m; i1 += 6){
		if(m % i1 == 0 || m % (i1 + 2) == 0){
			return 0;
		}
	}
	return 1;
}

int decr(int a){
    int b = a / 10, temp;
    int max = a % 10;
    while(b > 0){
        temp = b % 10;
        b /= 10;
        if (temp >= max) return 0;
        else max = temp;
    }
    return 1;
}

int incr(int a){
    int b = a / 10, temp;
    int min = a % 10;
    while(b > 0){
        temp = b % 10;
        b /= 10;
        if (temp <= min) return 0;
        else min = temp;
    }
    return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		int l = binPow(10, n - 1);
		int r = l * 10 - 1;
		for(int i = l; i <= r; i++){
			if(decr(i) && nt(i)) cnt++;
			else if(incr(i) && nt(i)) cnt++;
		}
		cout << cnt << endl;
	}
	// Biden
	return 0;
}
