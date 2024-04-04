#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if(n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
	    int temp = n, sum1 = 0, sum2 = 0, a = 2;
	    for(int a = 2; a <= temp; a++){
	        while(temp % a == 0){
	            int i = a;
	            while (i > 0){
	                sum1 += i % 10;
	                i /= 10;
	            }
	            temp /= a;
	        }
	    }
	    temp = n;
	    while(temp > 0){
	        sum2 += temp % 10;
	        temp /= 10;
	    }
	    if(sum1 == sum2 && !isPrime(n)){
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	// Biden
	return 0;
}

