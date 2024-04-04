#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> maxSlidingWindow(vector<int>& arr, int k){
	// Priority Queue muon nam
    vector<int> ans;
    priority_queue<pair<int, int>> heap;
    for (int i = 0; i < k; i++)
        heap.push({
			arr[i], i
		});
    ans.push_back(heap.top().first);
    for (int i = k; i < arr.size(); i++) {
        heap.push({
			arr[i], i
		});
        while(heap.top().second <= i - k) heap.pop();
        ans.push_back(heap.top().first);
    }
    return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a;
		vector<int> v;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a);
		}
		vector<int> res = maxSlidingWindow(v, k);
		for(auto i : res) cout << i << " ";
		cout << endl;
	}
	// Biden
	return 0;
}
