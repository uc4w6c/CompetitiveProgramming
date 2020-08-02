#include <bits/stdc++.h>
using namespace std;

// 
int N;
vector<bool> c(200000);
int changeCount = 0;

void change(int left, int right) {
    while (left < right) {
        cout << left << " " << right << endl;
        if (c[left] == true && c[right] == false) {
            // cout << "change" << endl; // debug
            swap(c[left], c[right]);
            changeCount++;
        } else if (left == true) {
            right--;
        } else {
            left++;
        }
    }
}
int main() {
    cin >> N;
    string tmp;
    cin >> tmp;
    for (int i = 0; i < N; i++) {
        if (tmp[i] == 'R') {
            c[i] = false;  // Red
        } else {
            c[i] = true;  // White
        }
    }
    change(0, N - 1);
    cout << changeCount;
}
