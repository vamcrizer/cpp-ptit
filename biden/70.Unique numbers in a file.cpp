//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//bool cmp(pair<string, int>& a, pair<string, int>& b){
//	int l1 = a.first.size();
//    int l2 = b.first.size();
//    if(l1 > l2){
//        b.first.insert(0, l1 - l2, '0');
//    } else {
//        a.first.insert(0, l2 - l1, '0');
//    }
//    return a.first < b.first;
//}
//
//void sort(map<string, int>& M) { 
//    // Declare vector of pairs 
//    vector<pair<string, int> > A; 
//    // Copy key-value pair from Map 
//    // to vector of pairs 
//    for (auto& it : M) { 
//        A.push_back(it); 
//    }
//    // Sort using comparator function 
//    sort(A.begin(), A.end(), cmp); 
//    // Print the sorted value 
//    for (auto& it : A) { 
//        cout << it.first << ' ' << it.second << endl; 
//    } 
//} 
//
//int main(){
////	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string s;
//	ifstream input ("DATA.in");
//	map<string, int> mp;
//	while(input >> s){
//		mp[s]++;
//	}
//	sort(mp);
//    for (auto i = mp.begin(); i != mp.end(); i++) 
//        cout << i->first << " " << i->second << endl; 
//	// Biden
//	return 0;
//}

