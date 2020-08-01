#include <bits/stdc++.h>
using namespace std;

// D - Caracal vs Monster
// 以下そのまま計算した場合、TLEになる。
int main() {
    priority_queue<long long, std::vector<long long>, std::greater<long long>> monsters;
    long long H;
    cin >> H;
    monsters.push(H);

    long long countAtack = 0;
    while (!monsters.empty()) {
        countAtack++;
        if (monsters.top() == 1) {
            monsters.pop();
        } else {
            H = monsters.top() / 2;
            monsters.pop();
            monsters.push(H);
            monsters.push(H);
        }
    }
    cout << countAtack;
}
// max: 1000000000000
//      1000000000000

/*
## 3
1
1
result 3
## 4
2
2

1
1
1
1
result 7
*/
