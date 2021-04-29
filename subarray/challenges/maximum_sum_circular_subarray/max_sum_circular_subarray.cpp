#include <climits>
#include <iostream>

int kadanes(int arr[], int n) {
  int sum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum < 0) sum = 0;
    maxSum = std::max(maxSum, sum);
  }
  return maxSum;
}
int main() {
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int totalSum = 0;

  for (int i = 0; i < n; i++) {
    totalSum += a[i];
    a[i] = a[i] * -1;
  }

  int max_cir_sum = totalSum + kadanes(a, n);

  std::cout << max_cir_sum;
}
