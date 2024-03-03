// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str Min(int m, int s){
	str r;
	int sum = 0, n = m;
	while(m--){
		for(int i=0; i<=9; i++){
			if(i==0 && n==m+1) continue;
			if(sum + i <= s && m*9 >= s - sum - i){
				r += to_string(i);
				sum += i;
				break;
			}
		}
	}return r;
}

str Max(int m, int s){
	str r;
	int sum = 0;
	while(m--){
		for(int i=9; i>=0; i--){
			if(sum + i <= s){
				r += to_string(i);
				sum += i;
				break;
			}
		}
	}return r;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, s; cin >> m >> s;
	if(m*9 < s || s==0){
		cout << "-1 -1";
	}else{
		cout << Min(m, s) << ' ' << Max(m, s);
	}return 0;
}