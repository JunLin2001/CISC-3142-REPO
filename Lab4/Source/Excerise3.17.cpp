#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> v;
  std::string w;
  while (std::cin >> w)
    v.push_back(w);
  for (auto &item : v)
    for (auto &c : item)
      c = toupper(c);
  for (decltype(v.size()) i = 0; i != v.size(); i++) {
    std::cout << v[i] << '\t';
    if ((i + 1) % 8 == 0)
    std::cout << std::endl;
  }

  return 0;
}