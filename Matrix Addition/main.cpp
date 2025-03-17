#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<vector<int>> addMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B) {
  int row = A.size();
  int col = A[0].size();

  vector<vector<int>> result(row, vector<int>(col));

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      result[i][j] = A[i][j] + B[i][j];
    }
  }

  return result;
}

int main() {
  vector<vector<int>> A = {{1, 2}, {3, 4}};
  vector<vector<int>> B = {{5, 6}, {7, 8}};
  vector<vector<int>> result = addMatrix(A, B);

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

  cout << "Matrix A + B:" << '\n';

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
[ 1  2 ]
[ 3  4 ]

Matrix B:
[ 5  6 ]
[ 7  8 ]

Matrix A + B:
[ 6  8 ]
[ 10  12 ]
 */