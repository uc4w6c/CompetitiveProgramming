#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    long long A[N];
    long long modNum = pow(10, 9) + 7;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            ans += A[i] * A[j];
            ans %= modNum;
        }
    }
    cout << ans;
}
/*
2 3 4

2 * 3
2 * 4
3 * 4

mod 2
1 2 0

8
12


2 3 4

2 * 3
2 * 5
3 * 5

10
15
 = 25

3 4 5

3 * 4
3 * 5
4 * 5

15
20
 = 35

3 + 4 = 12
7 * 5 = 35

足した数 * 新しい数が結果になる!!!

*/

/*
3 4 5

3 * 4
3 * 5
4 * 5

mod 5

12 + 35 = 47 % 5 = 2

2 + (2 * 5) % 5 = 2


*/
