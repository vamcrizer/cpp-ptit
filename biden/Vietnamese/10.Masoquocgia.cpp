#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sex(ll n){
	int a[20] = {}, pos = 0;
	while(n > 0){
		a[pos++] = n % 10;
		n /= 10;
	}
	int target = -1;
	for(int i = pos - 1; i >= 2; i--){
		if(a[i] == 0 && a[i - 1] == 8 && a[i - 2] == 4){
			target = i;
			break;
		}
	}
	if(target == -1) return 0;
	for(int i = pos - 1; i >= 0; i--){
		if(i == target){
			i -= 2;
			continue;
		}
		cout << a[i];
	}
	cout << endl;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		sex(n);
	}
	// Biden
	return 0;
}
