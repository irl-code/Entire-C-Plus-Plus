#include <algorithm>
#include <iostream>
#define get(x) (std::cin >> x)
std::string comp(int *arr, int &s) {
  int max = std::max(*(arr), *(arr + 1));
  if (max > *(arr + 2) || max > *(arr + 3)) {
    return "Yes";
  } else {
    return "No";
  }
  return 0;
}
int main() {
  int size, i = 0;
  int play[size];
  get(size);
  while (i != size) {
    for (int i = 0; i < size; i++) {
      std::cin >> play[i];
    }
    std::cout << comp(play, size);
    i++;
  }
}