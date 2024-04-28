#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class GiangVien{
	public:
		string id;
		string name;
		string subject;
		string name_low;
		GiangVien();
		friend istream& operator >> (istream &in, GiangVien &a);
		friend ostream& operator << (ostream &out, GiangVien a);
};

GiangVien::GiangVien(){
	// Implementation
	id = "";
	name = subject = name_low = "";
}

int j = 1;

istream& operator >> (istream &in, GiangVien &a){
	a.id = to_string(j);
	if(a.id.size() == 1) a.id.insert(0, "0");
	a.id.insert(0, "GV");
	j++;
	string s, w;
	scanf("\n");
	getline(cin, a.name);
	getline(cin, s);
	stringstream ss(s), ss1(a.name);
	while(ss >> w){
		a.subject += toupper(w[0]);
	}
	while(ss1 >> w){
		for(int i = 0; i < w.size(); i++){
			a.name_low += tolower(w[i]);
		}
	}
	return in;
}

ostream& operator << (ostream &out, GiangVien a){
	cout << a.id << " " << a.name << " " << a.subject << endl;
	return out;
}

int main(){
	int N, T, i;
    cin >> N;
	GiangVien ds[N];
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    cin >> T;
    cin.ignore();
    while(T--){
    	string s, w, ma = "";
    	getline(cin, s);
    	cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		stringstream ss(s);
    	while(ss >> w){
    		for(int i = 0; i < w.size(); i++){
    			ma += tolower(w[i]);
			}
		}
    	for(i = 0; i < N; i++){
    		if(ds[i].name_low.find(ma) != string::npos){
    			cout << ds[i];
			}
		}
	}
	// Biden
	return 0;
}
