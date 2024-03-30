#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int start = 1;

string standardlize_name(string name){
    vector<string> ve;
    stringstream ss(name);
    string word;
    while(ss >> word){
        ve.push_back(word);
    }
    string tmp = "";
    for (auto &x : ve){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        x[0] = toupper(x[0]);
        tmp += x + " ";
    }
    tmp.pop_back();
    return tmp;
}
string standardlize_date(string date){
    vector<string> ve;
    string tmp;
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
    for (auto x : ve){
        if (x.length() < 2){
            x = '0' + x;
        }
        tmp += x + '/';
    }
    tmp.pop_back();
    return tmp;
}


struct SinhVien{
string ma_sv;
string name;
string lop;
string date;
double gpa;
};

void nhap(struct SinhVien ds[], int n){
    cin.ignore();
    for (int i = 0; i < n; i++){
        ds[i].ma_sv = "B20DCCN0";
        int tmp = start++;
        if (tmp < 10){
            ds[i].ma_sv += "0" + to_string(tmp);
        } else {
            ds[i].ma_sv += to_string(tmp);
        }
        getline(cin, ds[i].name);
        cin >> ds[i].lop;
        cin >> ds[i].date;
        cin >> ds[i].gpa;
        ds[i].date = standardlize_date(ds[i].date);
        ds[i].name = standardlize_name(ds[i].name);
        cin.ignore();
    }
}
bool cmp(struct SinhVien a, struct SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(struct SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}

void in(struct SinhVien ds[], int n){
    for (int i = 0; i < n; i++){
        cout << ds[i].ma_sv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].date << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}