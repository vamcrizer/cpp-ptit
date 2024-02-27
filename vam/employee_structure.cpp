#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

struct Employee{
    string id;
    string name;
    string gender;
    string address;
    string tax;
    string date;
    string cdate;
};

void input(struct Employee &a){
    a.id = "00001";
    vector<string> ve;
    getline(cin, a.name);
    cin >> a.gender;
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
    getchar();
    getline(cin, a.address);
    cin >> a.tax;
    cin >> a.cdate;
    ve.clear();
    for (int i = 0; i < (a.cdate).length(); i++){
        if (a.cdate[i] == '/'){
            a.cdate[i] = ' ';
        }
    }
    stringstream ss2(a.cdate);
    string word2;
    while(ss2 >> word2){
        ve.push_back(word2);
    }
    if (ve[0].length() < 2){
        ve[0].insert(0, 1, '0');
    }
    if (ve[1].length() < 2){
        ve[1].insert(0, 1, '0');
    }
    a.cdate = ve[0] + "/" + ve[1] + "/" + ve[2];
}

void print(struct Employee a){
    cout << a.id << " " << a.name << " " << a.gender << " " << a.date << " " << a.address << " " << a.tax << " " << a.cdate;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
