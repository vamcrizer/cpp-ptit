#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void minSum(long long *n) {
	long long digit, rev = 0, count = 0;
	while (*n != 0) {
    	count++;
        digit = *n % 10;
        rev = rev * 10 + digit;
        *n /= 10;
    }
	
    while (count != 0) {
        digit = rev % 10;
        *n *= 10;
        if(digit == 6) digit = 5;
        *n += digit;
        rev /= 10;
        count--;
    }
}

void maxSum(long long *n) {
	long long digit, rev = 0, count = 0;
	while (*n != 0) {
    	count++;
        digit = *n % 10;
        rev = rev * 10 + digit;
        *n /= 10;
    }
	
    while (count != 0) {
        digit = rev % 10;
        *n *= 10;
        if(digit == 5) digit = 6;
        *n += digit;
        rev /= 10;
        count--;
    }
}

int main(){
	int cases;
    cin >> cases;
    while(cases--){
    	long long m, n;
    	cin >> m >> n;
	    minSum(&m);
	    minSum(&n);
	    cout << m + n << " ";
		maxSum(&m);
		maxSum(&n);
		cout << m + n << endl;
	}
	// Biden
    return 0;
}
