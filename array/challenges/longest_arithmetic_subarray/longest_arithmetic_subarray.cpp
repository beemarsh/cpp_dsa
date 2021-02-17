#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int maxlen = 1;
  int diff = a[1] - a[0];
  int len = 1;

  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] == diff) {
      len++;
    } else {
      len = 2;
      diff = a[i] - a[i - 1];
    }

    maxlen = std::max(maxlen, len);
  }
  std::cout << maxlen;
}
