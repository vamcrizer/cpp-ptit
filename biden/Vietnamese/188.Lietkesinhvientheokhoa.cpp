#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
	string id;
	string name;
	string classes;
	string email;
};

void nhap(SinhVien *a, int n){
	for(int i = 0; i < n; i++){
		cin >> a[i].id;
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].classes >> a[i].email;
	}
}

void in(SinhVien *a, int n, string s){
	cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
	s = s.substr(2, 2);
	for(int i = 0; i < n; i++){
		string khoa = a[i].classes.substr(1, 2);
		if(khoa == s){
			cout << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].email << endl;
		}
	}
}

int main(){
    struct SinhVien ds[1005];
    int N, T;
    cin >> N;
    nhap(ds, N);
    cin >> T;
    while(T--){
    	string s;
    	cin >> s;
    	in(ds, N, s);
	}
	// Biden
	return 0;
}
