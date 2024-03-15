// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void sx(int a[], int n){
	int res = 0;
	pair<int, int> r[n+5];
	for(int i=1; i<=n; i++){
		r[i] = {a[i], i};
	}sort(r+1, r+n+1);
	for(int i=1; i<=n; i++){
		// Nếu vị trí i hiện tại có giá trị khác mảng a ban đầu thì cần swap
		if(i != r[i].second){
			swap(r[i].first, r[r[i].second].first);
			swap(r[i].second, r[r[i].second].second);
			++res; --i;
		}// Nếu đã swap ở trên thì sẽ là phần tử khác ở vị trí i này
		// nên cần xét lại vị trí này => --i;
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}sx(a, n);
	}
}
