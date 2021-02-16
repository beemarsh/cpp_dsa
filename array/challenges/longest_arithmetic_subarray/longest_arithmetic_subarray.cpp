#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int lp = 0, rp = 0;
  int maxlen = 1;
  int diff = a[1] - a[0];
  int len = 1;

  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] - a[i] == diff) {
      len++;
    } else {
      len = 2;
    }

    diff = a[i + 1] - a[i];
    maxlen = std::max(maxlen, len);
  }
  std::cout << maxlen;
}
