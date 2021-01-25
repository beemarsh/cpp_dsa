#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  for (int i = 1; i < n; i++) {
    int curr = a[i];
    int j = i - 1;
    while (a[j] > curr && j >= 0) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = curr;
  }

  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }
  return 1;
}
