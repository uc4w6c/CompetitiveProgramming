#include <bits/stdc++.h>
using namespace std;

// Pertition パーティション
#define MAX 100000
int A[MAX], N;

int partition(int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int q = partition(0, N - 1);

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        if (i == q) printf("[");
        printf("%d", A[i]);
        if (i == q) printf("]");
    }
}
