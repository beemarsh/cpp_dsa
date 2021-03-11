#include <climits>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int N = 1e6 + 2;
  int checkA[N];

  for (int i = 0; i < N; i++) {
    checkA[i] = -1;
  }

  int minIdx = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (checkA[a[i]] == -1) {
      checkA[a[i]] = i;
    } else {
      minIdx = std::min(minIdx, checkA[a[i]]);
    }
  }

  std::cout << minIdx;
}
