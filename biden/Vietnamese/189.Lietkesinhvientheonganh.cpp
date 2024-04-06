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
	string ma_nganh;
	if(s == "Ke toan") ma_nganh = "DCKT";
    else if(s == "Vien thong") ma_nganh = "DCVT";
    else if (s == "Dien tu") ma_nganh = "DCDT";
    else if (s == "Cong nghe thong tin") ma_nganh = "DCCN";
    else if (s == "An toan thong tin") ma_nganh = "DCAT";
	for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
	cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
	for(int i = 0; i < n; i++){
		string ma = a[i].id.substr(3, 4);
		if(ma == ma_nganh){
			if(ma == "DCCN" || ma == "DCAT"){
				if(a[i].classes.substr(0, 1) != "E") cout << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].email << endl;
			}
			else cout << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].email << endl;
		}
	}
}

int main(){
    struct SinhVien ds[1005];
    int N, T;
    cin >> N;
    nhap(ds, N);
    cin >> T;
    cin.ignore();
    while(T--){
    	string s;
    	getline(cin, s);
    	in(ds, N, s);
	}
	// Biden
	return 0;
}
