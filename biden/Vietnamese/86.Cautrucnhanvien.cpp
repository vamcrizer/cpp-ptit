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

void nhap(NhanVien &Target){
	Target.id = "00001";
	getline(cin, Target.name);
	getline(cin, Target.gender);
	getline(cin, Target.dob);
	getline(cin, Target.address);
	getline(cin, Target.taxID);
	getline(cin, Target.contract);
}

void in(NhanVien Target){
	cout << Target.id << " " << Target.name << " " << Target.gender << " " << Target.dob << " " << Target.address << " " << Target.taxID << " " << Target.contract;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
	// Biden
	return 0;
}
