#include <iostream>
#include <string>
#include <utility>
#define get(x) (std::cin >> x)
std::string short_srt(std::string &s) {
  std::string word = "abc";
  if (s == word) {
    return "Yes";
  }
  std::string w = s;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j <= s.size() - 1; j++) {
      std::swap(s[i], s[j]);
      if (s == word) {
        return "Yes";
      } else {
        s = w;
      }
    }
  }
  return "No";
}
int main() {
  std::string s = "";
  int size, i = 0;
  get(size);
  while (i != size) {
    get(s);
    std::cout << short_srt(s);
    i++;
  }
  return 0;
}