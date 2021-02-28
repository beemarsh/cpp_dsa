#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int S;
  std::cin >> S;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int rp = 0, lp = 0;
  int currSum = 0;

  for (int i = 0; i < n; i++) {
    if (a[rp] + currSum > S) {
      currSum -= a[lp];
      lp++;
    } else if (a[rp] + currSum < S) {
      currSum += a[rp];
      rp++;
    } else
      break;
  }

  std::cout << lp + 1 << " " << rp + 1;
}
