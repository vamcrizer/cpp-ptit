#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

string standardlize(string name){
    vector<string> ve;
    stringstream ss(name);
    string word;
    string tmp = "";
    while(ss >> word){
        ve.push_back(word);
    }
    for (auto &x : ve){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        x[0] = toupper(x[0]);
        tmp += x + " ";
    }
    tmp.pop_back();
    return tmp;
}

class SinhVien{
public:
    string name;
    string ma_sv; 
    string lop;
    string date;
    double gpa;

    friend istream& operator>>(istream& in, SinhVien& p){
        getline(in, p.name);
        in >> p.lop >> p.date >> p.gpa;
        p.name = standardlize(p.name);
        string word;
        string tmp = "";
        vector<string> ve;
        for (int i = 0; i < p.date.length(); i++){
            if (p.date[i] == '/'){
                p.date[i] = ' ';
            }
        }
        stringstream ss(p.date);
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
        p.date = tmp;
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& p) {
        out << "B20DCCN001" << " " << p.name << " " << p.lop << " " << p.date << " " << fixed << setprecision(2) << p.gpa;
        return out;
    }


    void xuat(){
        cout << *this;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
