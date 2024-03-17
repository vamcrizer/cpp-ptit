#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ts{
	int h, m, s;
};

void input(ts &a){
	cin >> a.h >> a.m >> a.s;
}

bool cmpfunc(ts a, ts b){
	if(a.h == b.h){
		if(a.m == b.m) return a.s < b.s;
		return a.m < b.m;
	}
	return a.h < b.h;
}

void print(ts *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
	}
}

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	ts a[n];
	for(int i = 0; i < n; i++) input(a[i]);
	sort(a, a + n, cmpfunc);
	print(a, n);
	// Biden
	return 0;
}

