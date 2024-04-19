#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void qs(int a[], int l, int r){
    int pivot = a[r];
    int i = l, j = r;
    while(i <= j){
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;
        if (i <= j){
            swap(a[i], a[j]);
            if (i != j){
                cout <<  i + 1 << " " << j + 1;
                i++, j--;
            }
        }
    }
    if (i < r){
        qs(a, i , r);
    }
    if (l < j){
        qs(a,l,j);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    qs(a, 0, n - 1);
}