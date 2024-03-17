#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> maxSlidingWindow(vector<int>& arr, int k){
    vector<int> ans;
    priority_queue<pair<int, int> > heap;
 
    // Initialize the heap with the first k elements
    for (int i = 0; i < k; i++)
        heap.push({ arr[i], i });
 
    // The maximum element in the first window
    ans.push_back(heap.top().first);
 
    // Process the remaining elements
    for (int i = k; i < arr.size(); i++) {
        // Add the current element to the heap
        heap.push({ arr[i], i });
 
        // Remove elements that are outside the current
        // window
        while(heap.top().second <= i - k) heap.pop();
 
        // The maximum element in the current window
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

