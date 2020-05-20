#include <bits/stdc++.h>
using namespace std;

vector<int> InsertionSort(vector<int> A, int N, int G, int& cnt);

// Shell Sort : シェルソート
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int cnt = 0;
    int m = 2;
    int G[m] = { 4, 1 };
    for (int i = 0; i < m; i++) {
        A = InsertionSort(A, N, G[i], cnt);
    }

    cout << m << endl;
    for (int i = 0; i < m; i++) cout << G[i] << " ";
    cout << endl;
    cout << cnt << endl;

    for (int i = 0; i < N; i++) cout << A[i] << endl;
}

vector<int> InsertionSort(vector<int> A, int N, int g, int& cnt) {
    for (int i = g; i < N; i++) {
        int v = A[i];
        int j = i - g;
        while (j >= 0 && A[j] > v) {
            A[j + g] = A[j];
            j = j - g;
            cnt++;
        }
        A[j + g] = v;
    }
    return A;
}
