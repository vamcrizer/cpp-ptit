#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
int t; cin >> t;
while(t--){

    int rows, cols;

    cin >> rows >> cols;

    int matrix[rows][cols];
    queue<pair<int, int>> q;
    vector<pair<int, int>> v;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            char tmp;
            cin >> tmp;
            
            if (tmp == 'O')
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = 1;
            }

            if (matrix[i][j] == 0 && (i == 0 || j == 0 || i == rows - 1 || j == cols - 1))
            {
                q.push({i, j});
                matrix[i][j] = -1;
            }
        }
    }

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        v.push_back({x, y});

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        for (int k = 0; k < 4; ++k)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && ny >= 0 && nx < rows && ny < cols && matrix[nx][ny] == 0)
            {
                q.push({nx, ny});
                matrix[nx][ny] = -1;
            }
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == -1)
            {
                cout << "O" << " ";
            }
            else
            {
                cout << "X" << " ";
            }
        }
        cout << "\n";
    }
    cout << endl;
}
    return 0;
}