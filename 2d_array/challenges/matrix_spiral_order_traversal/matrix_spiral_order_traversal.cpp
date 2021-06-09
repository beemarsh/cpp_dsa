#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int a[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }

  int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

  while (row_start <= row_end && col_start <= col_end) {
    // Start row

    for (int i = col_start; i <= col_end; i++) {
      std::cout << a[row_start][i] << " ";
    }
    row_start++;

    // End column

    for (int i = row_start; i <= row_end; i++) {
      std::cout << a[i][col_end] << " ";
    }
    col_end--;

    // End Row
    for (int i = col_end; i >= col_start; i--) {
      std::cout << a[row_end][i] << " ";
    }
    row_end--;

    // First Column
    for (int i = row_end; i >= row_start; i--) {
      std::cout << a[i][col_start] << " ";
    }
    col_start++;
  }
}				
