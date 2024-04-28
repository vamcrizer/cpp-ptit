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
		NhanVien();
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};


NhanVien::NhanVien(){
	// Implementation
	id = "00001";
	name = gender = dob = address = taxID = contract = "";
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
    for(i = 0; i < N; i++) cout << ds[i];
	// Biden
	return 0;
}
