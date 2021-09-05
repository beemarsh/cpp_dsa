#include <iostream>

int main() {
  int n1, m1, n2, m2;
  std::cin >> n1 >> m1;
  std::cin >> n2 >> m2;

  if (m1 != n2) {
    std::cout << "Matrix Multiplication Not Possible";
    return -1;
  }

  int a1[n1][m1];
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m1; j++) {
      std::cin >> a1[i][j];
    }
  }

  int a2[n2][m2];
  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < m2; j++) {
      std::cin >> a2[i][j];
    }
  }

  int A[n1][m2];

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
      int sum = 0;
      for (int k = 0; k < m1; k++) {
        sum += a1[i][k] * a2[k][j];
      }
      A[i][j] = sum;
    }
  }

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
      std::cout << A[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
