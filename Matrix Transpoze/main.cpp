#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(const vector<vector<int>> &A) {
  int row = A.size();
  int col = A[0].size();

  vector<vector<int>> T(col, vector<int>(row));

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      T[j][i] = A[i][j];
    }
  }
  return T;
}

int main() {
  vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
  vector<vector<int>> T = transpose(A);

  for (const auto &row : A) {
    cout << "[";
    for (const auto &entity : row) {
      cout << entity << " ";
    }
    cout << "]\n";
  }

  cout << endl;

  for (const auto &row : T) {
    cout << "[";
    for (const auto &entity : row) {
      cout << entity << " ";
    }
    cout << "]\n";
  }
}
