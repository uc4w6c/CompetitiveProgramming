#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int countMus = 0;
    for (int i = 0; i < N; i += 2) {
        if (a[i] % 2 == 1) {
            countMus++;
        }
    }
    cout << countMus;
}
