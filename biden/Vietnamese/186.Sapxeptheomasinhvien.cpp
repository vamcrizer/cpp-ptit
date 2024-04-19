#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
	string id;
	string name;
	string classes;
	string email;
};

int i = 0;

void nhap(SinhVien *a){
	while(cin >> a[i].id){
		scanf("\n");
		getline(cin, a[i].name);
		cin >> a[i].classes >> a[i].email;
		i++;
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.id < b.id;
}

void sapxep(SinhVien *a, int n){
	sort(a, a + n, cmp);
}

void in(SinhVien *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].email;
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[1500];
    nhap(ds);
    sapxep(ds, i);
    in(ds, i);
	// Biden
	return 0;
}
