#include <bits/stdc++.h>
using namespace std;

// 以下RE
// 素数のものだけを求めるのではなく、それぞれが素であるものを求める必要があった
int main() {
    long long A, B;
    cin >> A >> B;

    long long cnt = 1;
    vector<bool> primeNumbers(min(A, B), true);
    for (int i = 2; i <= min(A, B); i++) {
        if (!primeNumbers[i]) continue;

        if (A % i == 0 && B % i == 0) {
            // cout << i << endl; // debug
            cnt++;
        }

        int j = 1;
        int result = i;
        while (result <= min(A, B)) {
            primeNumbers[result] = false;
            j++;
            result = i * j;
        }
    }
    cout << cnt;
}
