#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    int cnt = 0;
    cin >> A >> B;
    int now = 1;
    while (now < B) {
        now += A - 1;
        cnt++;
    }
    cout << cnt;
}
