#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
	string id;
	string name;
	string classes;
	double sc1, sc2, sc3;
};

void nhap(SinhVien &x){
	scanf("\n");
	cin >> x.id;
	scanf("\n");
	getline(cin, x.name);
	cin >> x.classes >> x.sc1 >> x.sc2 >> x.sc3;
}

bool cmpfunc(SinhVien x, SinhVien y){
	return x.name < y.name;
}

void sap_xep(SinhVien *x, int n){
	sort(x, x + n, cmpfunc);
}

void in_ds(SinhVien *x, int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << x[i].id << " " << x[i].name << " " << x[i].classes << " ";
		cout << fixed << setprecision(1) << x[i].sc1 << " " << x[i].sc2 << " " << x[i].sc3 << endl;
	}
}

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++){
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
	// Biden
	return 0;
}
