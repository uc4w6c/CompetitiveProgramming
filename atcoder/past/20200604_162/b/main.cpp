#include <bits/stdc++.h>
using namespace std;

// B - FizzBuzz Sum
int main() {
    int N;
    cin >> N;
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
        } else {
            sum += i;
        }
    }
    cout << sum;
}
