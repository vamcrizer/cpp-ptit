#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int j = 1;
class NhanVien{
	public:
		string id;
		string name;
		string gender;
		string dob;
		string address;
		string taxID;
		string contract;
		int d, m, y;
		NhanVien();
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};


NhanVien::NhanVien(){
	// Implementation
	id = "00001";
	name = gender = dob = address = taxID = contract = "";
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

istream& operator >> (istream &in, NhanVien &a){
	a.id = to_string(j);
	if(a.id.size() == 1) a.id.insert(0, "0000");
	else if(a.id.size() == 2) a.id.insert(0, "000");
	j++;
	scanf("\n");
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.taxID);
	getline(cin, a.contract);
	a.m = (a.dob[0] - '0') * 10 + a.dob[1] - '0';
	a.d = (a.dob[3] - '0') * 10 + a.dob[4] - '0';
	a.y = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + a.dob[9] - '0';
	return in;
}

ostream& operator << (ostream &out, NhanVien a){
	cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.taxID << " " << a.contract << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for(i = 0; i < N; i++) cout << ds[i];
	// Biden
	return 0;
}
