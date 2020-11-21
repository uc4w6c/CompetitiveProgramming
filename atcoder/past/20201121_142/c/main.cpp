#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> nMap;
    int A;
    for (int i = 1; i <= N; i++) {
        cin >> A;
        nMap[A] = i;
    }

    for (int i = 1; i <= N; i++) {
        cout << nMap[i] << " ";
    }
    
}
