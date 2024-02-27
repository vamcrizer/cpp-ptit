#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

struct item{
	int id;
	char ten[123], grp[123];
	ld mua, ban, pro;
};
typedef struct item it;
int cmp(const void*a, const void*b){
	it *x = (it*)a;
	it *y = (it*)b;
	//if(x->pro == y->pro) return x->id - y->id;
	return y->pro - x->pro;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	it a[n+5];
	for(int i=0; i<n; i++){
		cin.ignore();
		a[i].id = i+1;
		fgets(a[i].ten, 123, stdin);
		a[i].ten[strlen(a[i].ten) - 1] = '\0';
		fgets(a[i].grp, 123, stdin);
		a[i].grp[strlen(a[i].grp) - 1] = '\0';
		cin >> a[i].mua >> a[i].ban;
		a[i].pro = a[i].ban - a[i].mua;
	}qsort(a, n, sizeof(it), cmp);
	for(int i=0; i<n; i++){
		cout << a[i].id << ' ' << a[i].ten << ' ' << a[i].grp << ' ';
		cout << fixed << setprecision(2) << a[i].pro << endl;
	}
}