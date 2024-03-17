// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long int;
using ld = long double;
using str = string;

str dif(str a, str b){
	while(a.size() != b.size()) b = "0" + b;
	str res = "";
	for(int i=a.size()-1; i>=0; i--){
		int x = a[i] - b[i];
		if(a[i] < b[i]){
			x += 10;
			a[i-1] -= 1;
		}
		res += (char)(x + '0');
	}reverse(res.begin(), res.end());
	while(res[0] == '0') res.erase(0, 1);
	return res;
}

str sum(str a, str b){
	if(a.size() < b.size()) swap(a, b);
	while(a.size() != b.size()) b = "0" + b;
	str res = "";
	int nho = 0;
	for(int i=a.size()-1; i>=0; i--){
		int tmp = a[i] + b[i] - 96 + nho;
		res += (char)((tmp%10) + '0');
		nho = tmp/10;
	}if(nho) res += (char)(nho + '0');
	reverse(res.begin(), res.end());
	return res;
}

void solve(str a, str b){
	str res = "0", tmp;
	int n = a.size();
	for(int i=0; i<n; i++){
		tmp += a[i];
		res += "0";
		int cnt = 0;
		while((tmp.size() == b.size() && tmp > b) || tmp.size() > b.size()){
			++cnt;
			tmp = dif(tmp, b);
		}
		str vdl = ""; vdl += (char)(cnt + '0');
		res = sum(res, (str)(cnt + '0'));
	}if(tmp == b) res = sum(res, "1");
	while(res[0] == '0') res.erase(0, 1);
	cout << res << endl;
}

int main(){
	LonggVu();

	int t; cin >> t;
	while(t--){
		str a, b; cin >> a >> b;
		if(a.size() < b.size() || (a.size() == b.size() && a < b)){
			cout << "0\n";
		}else solve(a, b);
	}
}