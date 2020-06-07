#include <bits/stdc++.h>
using namespace std;

// D - Lunlun Number
// 以下本番
int main() {
    int K;
    cin >> K;

    queue<long long> q;
    for (int i = 1; i < 10; i++) {
        q.push(i);
    }

    K--;
    while(K--) {
        long long x = q.front();
        // cout << x << endl;
        q.pop();
        if (x % 10 != 0)
            q.push(10 * x + x % 10 - 1);
        q.push(10 * x + x % 10);
        if (x % 10 != 9)
            q.push(10 * x + x % 10 + 1);
    }
    cout << q.front();
    return 0;
}
