#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    bool c[N];
    string tmp;
    cin >> tmp;
    for (int i = 0; i < N; i++) {
        if (tmp[i] == 'R') {
            c[i] = false;  // Red
        } else {
            c[i] = true;  // White
        }
    }

    int changeCount = 0;
    int left = 0, right = N - 1;
    while (left < right) {
        // cout << left << " " << right << endl;
        // cout << "true:" << c[left] << " " << c[right] << endl;
        if (c[left] == true && c[right] == false) {
            // cout << "change" << endl; // debug
            swap(c[left], c[right]);
            changeCount++;
        } else if (c[left] == true) {
            right--;
        } else {
            left++;
        }
    }
    cout << changeCount;
}
