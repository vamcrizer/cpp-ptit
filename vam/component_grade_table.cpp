#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
struct hs{
	char id[20], ten[55], lop[20];
	ld x, y, z;
};
typedef struct hs hs;
int x = 1;
void nhap(hs &n){
	cin.ignore();
	fgets(n.id, 20, stdin);
	n.id[strlen(n.id) - 1] = '\0';
	fgets(n.ten, 55, stdin);
	n.ten[strlen(n.ten) - 1] = '\0';
	fgets(n.lop, 20, stdin);
	n.lop[strlen(n.lop) - 1] = '\0';
	cin >> n.x >> n.y >> n.z;
}
void in(hs &n){
	cout << x << ' ' << n.id << ' ' << n.ten << ' ' << n.lop << ' ' << fixed << setprecision(1) << n.x << ' ' << n.y << ' ' << n.z << endl;
	++x;
}
int cmp(const void*a, const void*b){
	hs *x = (hs*)a;
	hs *y = (hs*)b;
	return strcmp(x->ten, y->ten);
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	hs a[n+5];
	for(int i=0; i<n; i++){
		nhap(a[i]);
	}qsort(a, n, sizeof(hs), cmp);
	for(int i=0; i<n; i++){
		in(a[i]);
	}return 0;
}