#include <iostream>

int main()
{

  int n;
  std::cin >> n;

  int a[n + 1];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  a[n] = -1;
  int max = -1;
  int rb_days = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > max && a[i] > a[i + 1]) {
      rb_days++;
    }
    max = std::max(max, a[i]);
  }

  std::cout << rb_days;
}
