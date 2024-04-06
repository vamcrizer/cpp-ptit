#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Human{
	string name;
	string dob;
	int d, m, y;
};

void input(Human &a){
	cin >> a.name >> a.dob;
	a.d = (a.dob[0] - '0') * 10 + a.dob[1] - '0';
	a.m = (a.dob[3] - '0') * 10 + a.dob[4] - '0';
	a.y = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + a.dob[9] - '0';
}

bool cmp(Human a, Human b){
	if(a.y == b.y){
		if(a.m == b.m) return a.d < b.d;
		return a.m < b.m;
	}
	return a.y < b.y;
}

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	cin.ignore();
	Human a[n];
	for(int i = 0; i < n; i++) input(a[i]);
	sort(a, a + n, cmp);
	cout << a[n - 1].name << endl << a[0].name;
	// Biden
	return 0;
}
