#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int K;
  std::cin >> K;

  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }

  int r = 0, c = m - 1;
  bool found = false;

  while (r < n && c >= 0) {
    if (a[r][c] > K)
      c--;
    else if (a[r][c] < K)
      r++;
    else {
      found = true;
      break;
    }
  }

  if (found)
    std::cout << r << " " << c;
  else
    std::cout << "Not Found";
}
