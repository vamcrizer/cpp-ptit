#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class DoanhNghiep{
	public:
		string id;
		string name;
		int amount;
		DoanhNghiep();
		friend istream& operator >> (istream &in, DoanhNghiep &a);
		friend ostream& operator << (ostream &out, DoanhNghiep a);
};

DoanhNghiep::DoanhNghiep(){
	// Implementation
	id = "";
	name = "";
	amount = 0;
}

istream& operator >> (istream &in, DoanhNghiep &a){
	cin >> a.id;
	scanf("\n");
	getline(cin, a.name);
	cin >> a.amount;
	return in;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.amount == b.amount) return a.id < b.id;
	return a.amount > b.amount;
}

ostream& operator << (ostream &out, DoanhNghiep a){
	cout << a.id << " " << a.name << " " << a.amount << endl;
	return out;
}

int main(){
	int N, T, i, a, b;
    cin >> N;
	DoanhNghiep ds[N];
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
	sort(ds, ds + N, cmp);
	cin >> T;
	while(T--){
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
	    for(i = 0; i < N; i++){
	    	if(ds[i].amount >= a && ds[i].amount <= b) cout << ds[i];
	    }		
	}
	// Biden
	return 0;
}
