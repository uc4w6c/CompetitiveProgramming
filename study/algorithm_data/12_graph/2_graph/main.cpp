#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int mapU[N + 1][N + 1];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            mapU[i][j] = 0;
        }
    }

    int K, U, V;
    for (int i = 1; i <= N; i++) {
        cin >> K >> U;
        for (int j = 0; j < U; j++) {
            cin >> V;
            mapU[i][V] = 1;
            // mapU[V][i] = 1;
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << mapU[i][j] << " ";
        }
        cout << endl;
    }
}
