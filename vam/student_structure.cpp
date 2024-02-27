#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

struct Student{
    string name;
    string ma_sv;
    string lop;
    string date;
    float gpa;
};

void input(struct Student &a){
    vector<string> ve;
    a.lop = "B20DCCN001";
    getline(cin, a.name);
    cin >> a.ma_sv;
    cin >> a.date;
    for (int i = 0; i < (a.date).length(); i++){
        if (a.date[i] == '/'){
            a.date[i] = ' ';
        }
    }
    stringstream ss(a.date);
    string word;
    while(ss >> word){
        ve.push_back(word);
    }
    if (ve[0].length() < 2){
        ve[0].insert(0, 1, '0');
    }
    if (ve[1].length() < 2){
        ve[1].insert(0, 1, '0');
    }
    a.date = ve[0] + "/" + ve[1] + "/" + ve[2];
    cin >> a.gpa;
}

void print(struct Student a){
    cout << a.lop << " " << a.name << " " << a.ma_sv << " " << a.date << fixed << " " << setprecision(2) << a.gpa;
}

int main(){
    struct Student A;
    input(A);
    print(A);
    return 0;
}