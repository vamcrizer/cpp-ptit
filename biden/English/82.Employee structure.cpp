#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Employee{
	string id;
	string name;
	string gender;
	string dob;
	string address;
	string taxID;
	string contract;
};

void input(Employee &Target){
	Target.id = "00001";
	getline(cin, Target.name);
	getline(cin, Target.gender);
	getline(cin, Target.dob);
	getline(cin, Target.address);
	getline(cin, Target.taxID);
	getline(cin, Target.contract);
}

void print(Employee Target){
	cout << Target.id << " " << Target.name << " " << Target.gender << " " << Target.dob << " " << Target.address << " " << Target.taxID << " " << Target.contract;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
	// Biden
	return 0;
}

