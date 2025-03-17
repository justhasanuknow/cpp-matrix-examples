
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6}};

  for (int rows = 0; rows < matrix.size(); rows++) {
    for (int cols = 0; cols < matrix[rows].size(); cols++) {
      cout << matrix[rows][cols] << " ";
    }
    cout << endl;
  }

  return 0;
}
