#include <bits/stdc++.h>
using namespace std;

// A - A?C
int main() {
    int N, K;
    cin >> N >> K;

    vector<bool> havePersons(N);
    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++) {
            int person;
            cin >> person;
            havePersons.at(person - 1) = true;
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (havePersons.at(i) == false) {
            count++;
        }
    }
    cout << count;
}
