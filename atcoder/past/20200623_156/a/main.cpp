#include <bits/stdc++.h>
using namespace std;

// A - Beginner
int main() {
    int N, R;
    cin >> N >> R;

    if (N >= 10) { 
        cout << R;
    } else {
        cout << R + (100 * (10 - N));
    }
}
