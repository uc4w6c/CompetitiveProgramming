#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, D;
    cin >> N >> D;
    int count = 0;
    int X,Y;
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        if (sqrt(pow(X, 2) + pow(Y, 2)) <= D) {
            count++;
        }
    }
    cout << count;
}
