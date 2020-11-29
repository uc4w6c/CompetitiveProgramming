#include <bits/stdc++.h>
using namespace std;

int main() {
  std::map<int, int, std::greater<int>> m { {-1, 77}, {0, 42}, {1, 84} };
  for (const auto& p : m)
    std::cout << '[' << p.first << ',' << p.second << "]\n";
}
