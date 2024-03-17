#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
	public:
		string id;
		string name;
		string classes;
		string dob;
		double gpa;
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien(){
	// Implementation
	id = "B20DCCN001";
	name = classes = dob = "";
	gpa = 0;
}

void nameNormalizer(string &s){
	stringstream ss(s);
	string word, res;
	int first = 1;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
		if(first) first = 0;
		else res += ' ';
		res += word;
	}
	s = res;
}

void birthdayNormalizer(string &s){
	if(s[2] != '/') s.insert(0, "0");
	if(s[5] != '/') s.insert(3, "0");
}

istream& operator >> (istream &in, SinhVien &a){
	getline(cin, a.name);
	getline(cin, a.classes);
	getline(cin, a.dob);
	cin >> a.gpa;
	nameNormalizer(a.name);
	birthdayNormalizer(a.dob);
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	cout << a.id << " " << a.name << " " << a.classes << " " << a.dob << " ";
	cout << fixed << setprecision(2);
	cout << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
	// Biden
	return 0;
}
