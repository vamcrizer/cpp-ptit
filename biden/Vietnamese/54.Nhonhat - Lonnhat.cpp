#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
	
vector<int> v;
string minimum(int m, int s){
	if(s > m * 9 || m > 1 && s == 0) return "-1";
	v.resize(m, 0);
	string res = "";
	s -= 1;
	for(int i = m - 1; i >= 0; i--){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		} else {
			v[i] = s;
			s = 0;
		}
	}
	v[0] += 1;
	for(int i = 0; i < m; i++){
		res += v[i] + '0';
	}
	v.clear();
	return res;
}

string maximum(int m, int s){
	if(s > m * 9 || m > 1 && s == 0) return "-1";
	v.resize(m, 0);
	string res = "";
	for(int i = 0; i < m; i++){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		} else {
			v[i] = s;
			s = 0;
		}
	}
	for(int i = 0; i < m; i++){
		res += v[i] + '0';
	}
	v.clear();
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, s;
	cin >> m >> s;
	cout << minimum(m, s) << " " << maximum(m, s) << endl;
	// Biden
	return 0;
}

