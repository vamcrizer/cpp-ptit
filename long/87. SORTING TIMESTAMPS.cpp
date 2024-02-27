#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
struct tg{
	int h, m, s;
};
typedef struct tg tg;
int cmp(const void*a, const void*b){
	tg *x = (tg*)a;
	tg *y = (tg*)b;
	if(x->h == y->h){
		if(x->m == y->m) return x->s - y->s;
		return x->m - y->m;
	}return x->h - y->h;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	tg a[n+5];
	for(int i=0; i<n; i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
	}qsort(a, n, sizeof(tg), cmp);
	for(int i=0; i<n; i++){
		cout << a[i].h << ' ' << a[i].m << ' ' << a[i].s << endl;
	}return 0;
}