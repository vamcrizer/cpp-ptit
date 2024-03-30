#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Items{
	int id;
	string name;
	string group;
	double buy, sell;
};

void input(Items &x, int i){
	x.id = i;
	scanf("\n");
	getline(cin, x.name);
	getline(cin, x.group);
	cin >> x.buy >> x.sell;
}

bool cmpfunc(Items x, Items y){
	return x.sell - x.buy > y.sell - y.buy;
}

void print(Items *x, int n){
	for(int i = 0; i < n; i++){
		cout << x[i].id << " " << x[i].name << " " << x[i].group << " ";
		cout << fixed << setprecision(2) << x[i].sell - x[i].buy << endl;
	}
}

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	Items a[n + 5];
	for(int i = 0; i < n; i++){
		input(a[i], i + 1);
	}
	sort(a, a + n, cmpfunc);
	print(a, n);
	return 0;
}
