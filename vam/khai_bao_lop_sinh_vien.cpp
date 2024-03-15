#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

class SinhVien{
public:
string name;
string ma_sv;
string lop;
string date;
double gpa;
    void nhap(){
        string name; string lop; string date;
        double gpa;
        getline(cin, name);
        cin >> lop >> date >> gpa;
        this->name = name;
        this->lop = lop;
        this->gpa = gpa;
        vector<string> ve;
        string tmp = "";
        for (int i = 0; i < date.length(); i++){
            if (date[i] == '/'){
                date[i] = ' ';
            }
        }
        stringstream ss(date);
        string word;
        while (ss >> word){
            ve.push_back(word);
        }
        for (auto &x : ve){
            if (x.length() < 2){
                x = '0' + x;
            }
            tmp += x + '/';
        }
        tmp.pop_back();
        this->date = tmp;
    }
    void xuat(){
        cout << "B20DCCN001" << " " << this->name << " " << this->lop << " " << this->date <<  " " << fixed << setprecision(2) << this->gpa; 
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}