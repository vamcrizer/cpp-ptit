#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct NhanVien{
	string id;
	string name;
	string gender;
	string dob;
	string address;
	string taxID;
	string contract;
};

void nhap(NhanVien &a){
	scanf("\n");
	getline(cin, a.name);
	cin >> a.gender >> a.dob;
	scanf("\n");
	getline(cin, a.address);
	cin >> a.taxID >> a.contract;
}

void inds(NhanVien *a, int n){
	for(int i = 0; i < n; i++){
		a[i].id = to_string(i + 1);
		if(a[i].id.size() == 1) a[i].id.insert(0, "0000");
		if(a[i].id.size() == 2) a[i].id.insert(0, "000");
		cout << a[i].id << " " << a[i].name << " " << a[i].gender << " " << a[i].dob << " " << a[i].address << " " << a[i].taxID << " " << a[i].contract << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
	// Biden
	return 0;
}
