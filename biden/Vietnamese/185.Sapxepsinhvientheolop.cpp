#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
	public:
		string id;
		string name;
		string classes;
		string email;
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien(){
	// Implementation
	id = "B20DCCN001";
	name = classes = email = "";
}

bool cmp(SinhVien a, SinhVien b){
	if(a.classes == b.classes) return a.id < b.id;
	return a.classes < b.classes;
}

void sapxep(SinhVien *a, int n){
	sort(a, a + n, cmp);
}

istream& operator >> (istream &in, SinhVien &a){
	cin >> a.id;
	scanf("\n");
	getline(cin, a.name);
	cin >> a.classes >> a.email;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	cout << a.id << " " << a.name << " " << a.classes << " " << a.email;
	cout << endl;
	return out;
}

int main(){
    SinhVien ds[2000];
    int N, i;
    cin >> N;
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
