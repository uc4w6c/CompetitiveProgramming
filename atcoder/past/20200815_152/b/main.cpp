#include <bits/stdc++.h>
using namespace std;

// B - Comparing Strings 
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        for (int i = 0; i < a; i++) cout << b;
        return 0;
    } else {
        for (int i = 0; i < b; i++) cout << a;
        return 0;
    }
}
