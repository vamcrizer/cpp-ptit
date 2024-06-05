#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class GiangVien{
	public:
		string id;
		string name;
		string subject;
		GiangVien();
		friend istream& operator >> (istream &in, GiangVien &a);
		friend ostream& operator << (ostream &out, GiangVien a);
};

GiangVien::GiangVien(){
	id = "";
	name = subject = "";
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
	stringstream ss(s);
	while(ss >> w){
		a.subject += toupper(w[0]);
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
    	stringstream ss(s);
    	while(ss >> w){
			ma += toupper(w[0]);
		}
		cout << "DANH SACH GIANG VIEN BO MON " << ma << ":" << endl;
    	for(i = 0; i < N; i++){
    		if(ma == ds[i].subject) cout << ds[i];
		}
	}
}
