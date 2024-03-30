#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class GiangVien{
	public:
		string id;
		string name;
		string last_name;
		string subject;
		GiangVien();
		friend istream& operator >> (istream &in, GiangVien &a);
		friend ostream& operator << (ostream &out, GiangVien a);
};

GiangVien::GiangVien(){
	// Implementation
	id = "VNCH";
	name = subject = "";
}

int j = 1;
vector<string> namelist;

bool cmp(GiangVien a, GiangVien b){
	if(a.last_name == b.last_name) return a.id < b.id;
	return a.last_name < b.last_name;
}

void sapxep(GiangVien *a, int n){
	sort(a, a + n, cmp);
}

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
		namelist.push_back(w);
	}
	a.last_name = namelist[namelist.size() - 1];
	namelist.clear();
	return in;
}

ostream& operator << (ostream &out, GiangVien a){
	cout << a.id << " " << a.name << " " << a.subject << endl;
	return out;
}

int main(){
	int N, i;
    cin >> N;
	GiangVien ds[N];
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
	// Biden
	return 0;
}
