#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
	a.id = "00001";
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.taxID);
	getline(cin, a.contract);
	return in;
}

ostream& operator >> (ostream &out, NhanVien a){
	cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.taxID << " " << a.contract;
	return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
	// Biden
	return 0;
}
