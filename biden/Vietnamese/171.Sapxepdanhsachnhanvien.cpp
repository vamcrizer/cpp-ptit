#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int i = 1;

struct NhanVien{
	string id;
	string name;
	string gender;
	string dob;
	string address;
	string taxID;
	string contract;
	int d, m, y;
};

void nhap(NhanVien &a){
	a.id = to_string(i);
	if(a.id.size() == 1) a.id.insert(0, "0000");
	if(a.id.size() == 2) a.id.insert(0, "000");
	i++;
	scanf("\n");
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	scanf("\n");
	getline(cin, a.address);
	getline(cin, a.taxID);
	getline(cin, a.contract);
	a.m = (a.dob[0] - '0') * 10 + a.dob[1] - '0';
	a.d = (a.dob[3] - '0') * 10 + a.dob[4] - '0';
	a.y = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + a.dob[9] - '0';
}

bool cmp(NhanVien a, NhanVien b){
	if(a.y == b.y){
		if(a.m == b.m) return a.d < b.d;
		return a.m < b.m;
	}
	return a.y < b.y;
}

void sapxep(NhanVien *a, int n){
	sort(a, a + n, cmp);
}

void inds(NhanVien *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i].id << " " << a[i].name << " " << a[i].gender << " " << a[i].dob << " " << a[i].address << " " << a[i].taxID << " " << a[i].contract << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
	// Biden
	return 0;
}
