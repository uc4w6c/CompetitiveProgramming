#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int n = N % 10;
    switch (n) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            cout << "hon";
            return 0;
        case 0:
        case 1:
        case 6:
        case 8:
            cout << "pon";
            return 0;
        case 3:
            cout << "bon";
            return 0;
    }
}
