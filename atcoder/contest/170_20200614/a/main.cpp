#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            cout << i + 1;
            return 0;
        }
    }
}
