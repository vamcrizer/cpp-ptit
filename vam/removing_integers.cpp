#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream file;
    ifstream file2;
    file.open("DATA1.in");
    file2.open("DATA2.in");
    set<string> ve1;
    set<string> ve2;
    string word;
    while (file >> word) {
        stringstream ss(word);
        if (ss >> word) {
            ve1.insert(word);
        }
    }
    string word2;
    while (file2 >> word2) {
        stringstream ss2(word2);
        if (ss2 >> word2) {
            ve2.insert(word2);
        }
    }
    vector<string> v_intersection(min(ve1.size(), ve2.size()));
    vector<string>::iterator it;
    it = set_intersection(ve1.begin(), ve1.end(), ve2.begin(), ve2.end(), v_intersection.begin());
    v_intersection.resize(it-v_intersection.begin());                      
    vector<string> v_union(ve1.size() + ve2.size());
    it = set_union(ve1.begin(), ve1.end(), ve2.begin(), ve2.end(), v_union.begin());
    v_union.resize(it-v_union.begin()); 
    sort(v_intersection.begin(), v_intersection.end());
    sort(v_union.begin(), v_union.end());
    for (auto &x : v_union){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
    }
    for (auto &x : v_intersection){
        transform(x.begin(), x.end(), x.begin(), ::tolower);
    }
    sort(v_intersection.begin(), v_intersection.end());
    sort(v_union.begin(), v_union.end());
    for (auto x : v_union){
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v_intersection){
        cout << x << " ";
    }
    return 0;
}
