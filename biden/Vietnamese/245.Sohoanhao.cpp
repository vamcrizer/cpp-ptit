#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//int check(ll n){
//	ll j = 0;
//    if(n == 1){
//        return 0;
//    }
//    ll sum = 0;
//    for(ll i = 1; i <= sqrt(n); i++){
//        if(n % i == 0){
//            if(i != 1){
//                j = n / i;
//            }
//            sum += i + j;
//        }
//    }
//    return sum == n;
//}

int check(ll n){
	ll a[] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
	for(int i = 0; i < 7; i++){
		if(n == a[i]) return 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
    	cout << check(n) << endl;
	}
	// Biden
	return 0;
}
