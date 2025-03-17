#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiply(const vector<vector<int>> &A, const vector<vector<int>> &B) {
  int row = A.size();
  int common = B.size();
  int col = B[0].size();

  vector<vector<int>> result(row, vector<int>(col, 0));

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      for (int k = 0; k < common; k++) {
        result[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return result;
}

int main() {
  vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
  vector<vector<int>> B = {{1, 4}, {2, 3}, {1, 0}};

  vector<vector<int>> result = multiply(A, B);

  cout << "Matrix A:" << '\n';

  for (const auto &row : A) {
    cout << "[";

    for (const int &entity : row) {
      cout << " " << entity << " ";
    }

    cout << "]\n";
  }

  cout << endl;

  cout << "Matrix B:" << '\n';

  for (const auto &row : B) {
    cout << "[";

    for (const int &entity : row) {
      cout << " " << entity << " ";
    }

    cout << "]\n";
  }

  cout << endl;

  cout << "Matrix A x B:" << '\n';

  for (const auto &row : result) {
    cout << "[";

    for (const int &entity : row) {
      cout << " " << entity << " ";
    }

    cout << "]\n";
  }

  return 0;
}
/* ---Output---
Matrix A:
[ 1  2  3 ]
[ 4  5  6 ]

Matrix B:
[ 1  4 ]
[ 2  3 ]
[ 1  0 ]

Matrix A + B:
[ 8  10 ]
[ 20  31 ]
 */