#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, ans = 1;
  cin >> a;

  for (int i = 2; i <= sqrt(a); i++) {
    int cnt = 0;
    while (a % i == 0) {
      cnt++;
      a /= i;
    }
    ans *= (cnt + 1);
    if (a == 1) break;
  }
  if (a != 1) ans *= 2;

  cout << ans;
  return 0;
}
