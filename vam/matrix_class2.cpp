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
    Matrix operator*(const Matrix &other){
        Matrix res(this->rows, other.cols);
        for (int i = 0; i < this->rows; i++){
            for (int j = 0; j < other.cols; j++){
                int tmp = 0;
                for (int k = 0; k < this->cols; k++){
                    tmp += this->elements[i][k] * other.elements[k][j];
                }
                res.elements[i][j] = tmp;
            }
        }
        return res;
    }
    ~Matrix() {
        for(int i = 0; i < this->rows; i++){
            delete[] this->elements[i];
        }
        delete[] this->elements;
    }
};

int main() {
    int m,n,p; cin >> m >> n >> p;
    Matrix A(m,n);
    Matrix B(n,p);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> A.elements[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cin >> B.elements[i][j];
        }
    }
    Matrix C = A * B;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            cout << C.elements[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
