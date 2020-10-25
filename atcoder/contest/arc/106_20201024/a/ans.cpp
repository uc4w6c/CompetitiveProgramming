#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    cin >> N;

    long long a = 1, b = 1;
    long long x = 3, y;
    while (x < N) {
        y = 5;
        b = 1;
        while (x + y <= N) {
            if (x + y > N) {
                break;
            }
            if (x + y == N) {
                cout << a << " " << b;
                return 0;
            }
            y *= 5;
            b++;
        }
        x *= 3;
        a++;
    }
    cout << "-1";
}
