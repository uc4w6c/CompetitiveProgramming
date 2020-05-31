#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long N;
    cin >> N;
    if (N == 1) {
        cout << 0;
        return 0;
    }

    long count = 0;
    long tmp = N;
    long max = sqrt(N);
    for (long i = 2; i <= N; i++) {
        if (tmp % i == 0) {
            tmp /= i;
            count++;
        }
    }
    /*for (long i = 2; i <= sqrt(N); i++) {
        if (tmp % i == 0) {
            tmp /= i;
            count++;
        }
    }*/
    // long tmp = N;
    /*while (tmp > 1) {
        for (long i = 2; i < N; i++) {
            if (tmp % i == 0) {
                tmp /= i;
                count++;
            }
        }
    }*/
    if (count == 0) {
        count = 1;
    }
    cout << count;
}
// Max
// 1000000000000