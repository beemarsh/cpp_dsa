#include <climits>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int maxSum = INT_MIN;
  int currentSum = 0;
  for (int i = 0; i < n; i++) {
    currentSum += a[i];
    if (currentSum < 0) currentSum = 0;
    maxSum = std::max(currentSum, maxSum);
  }
  std::cout << maxSum;
}
