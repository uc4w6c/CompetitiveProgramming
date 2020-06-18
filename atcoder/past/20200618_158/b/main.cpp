#include <bits/stdc++.h>
using namespace std;

// B - Count Balls
int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long count = N / (A + B);
    long long bal = N % (A + B);
    long long plus = 0;

    if (bal >= A) plus = A;
    else plus = bal;

    cout << (count * A) + plus;

}
// 8 3 4
// AAA BBBB A
// 3 + 4 1

// 12 3 4
// AAA BBBB AAA B

// 15
// AAA BBBB AAA BBBB A
