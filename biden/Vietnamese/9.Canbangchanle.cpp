#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canbang(int n){
	int c = 0, l = 0;
	while(n > 0){
		int digit = n % 10;
		if(n % 2 == 1) l++;
		else c++;
		n /= 10;
	}
	return c == l;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int cnt = 0;
	int l = pow(10, n - 1);
	int r = pow(10, n) - 1;
	for(int i = l; i <= r; i++){
		if(canbang(i)){
			cout << i;
			cnt++;
			if(cnt == 10){
				cnt = 0;
				cout << endl;
			} else {
				cout << " ";
			}
		}
	}
	// Biden
	return 0;
}

