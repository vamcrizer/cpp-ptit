#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Matrix {
public:
    int rows, cols;
    int** elements;
    Matrix(int m, int n) {
        this->rows = m;
        this->cols = n;
        this->elements = new int*[m];
        for(int i = 0; i < m; i++){
            this->elements[i] = new int[n];
        }
    }
    Matrix operator*(const Matrix& other) {
        Matrix result(this->rows, other.cols);
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.elements[i][j] = 0;
                for (int k = 0; k < this->cols; k++) {
                    result.elements[i][j] += this->elements[i][k] * other.elements[k][j];
                }
            }
        }
        return result;
    }
    ~Matrix() {
        for(int i = 0; i < this->rows; i++){
            delete[] this->elements[i];
        }
        delete[] this->elements;
    }
};

int main() {
    int t; cin >> t;
    while(t--){
    int m, n;
    cin >> m >> n;
    Matrix mat(m, n);
    Matrix mat_tranpose(n, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat.elements[i][j];
            mat_tranpose.elements[j][i] = mat.elements[i][j];
        }
    }
    Matrix res = mat * mat_tranpose;
    for (int i = 0; i < res.rows; i++) {
        for (int j =  0; j < res.cols; j++) {
            cout << res.elements[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    }
    return 0;
}
