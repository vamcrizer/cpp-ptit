#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
str msv = "B20DCCN0";
struct Student{
	str ma, ten, lop, dob;
	ld gpa;
};
typedef struct Student hs;
int cnt(int n){
	int res = 0;
	while(n){
		++res;
		n /= 10;
	}return res;
}
int x = 1;
void ngaysinh(str &a){
	str tmp = a, res;
	if(tmp.size() < 10){
		if(!(tmp[1] >= '0' && tmp[1] <= '9')){
			res += '0';
			res += tmp[0];
			res += '/';
			int pos = 0;
			for(int i=0; i<tmp.size(); i++){
				if(tmp[i]=='/'){
					pos = i+1;
					if(tmp[i+2]=='/'){
						res += '0';
					}break;
				}
			}
			for(int i=pos; i<tmp.size(); i++){
				res += tmp[i];
			}
		}else{
			int pos = 0;
			for(int i=0; i<tmp.size(); i++){
				res += tmp[i];
				if(tmp[i]=='/'){
					if(tmp[i+2]=='/'){
						res += '0';
						pos = i+1;
						break;
					}
				}
			}
			for(int i=pos; i<tmp.size(); i++){
				res += tmp[i];
			}
		}
	}a = res;
}
void chuanhoa(str &a){
	stringstream ss(a);
	str tu, res;
	int stt = 0;
	while(ss >> tu){
		int n = tu.size();
		if(tu[0] >= 'a' && tu[0] <= 'z') tu[0] -= 32;
		for(int i=1; i<n; i++){
			if(tu[i] >= 'A' && tu[i] <= 'Z') tu[i] += 32;
		}res += tu;
		res += " ";
	}a = res;
}
void masv(str &a){
	a += msv;
	int tmp = cnt(x);
	for(int i=1; i<=2 - tmp; i++){
		a += "0";
	}a += to_string(x);
	++x;
}
void input(hs a[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		chuanhoa(a[i].ten);
		cin >> a[i].lop >> a[i].dob >> a[i].gpa;
		ngaysinh(a[i].dob);
		masv(a[i].ma);
	}
}
void print(hs a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i].ma << ' ' << a[i].ten << a[i].lop << ' ' << a[i].dob << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}