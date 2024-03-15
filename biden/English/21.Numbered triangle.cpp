#include <bits/stdc++.h>
using namespace std;

void triangle(int n){
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= 2 * i + 1; j++){
			cout << j;
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	triangle(n);
	// Biden
	return 0;
}
