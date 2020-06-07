#include <bits/stdc++.h>
using namespace std;

// Merge Sort - マージソート
// できていない

vector<int> merge(vector<int> A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i =0; i < n1; i++) L[i] = A[left + i];
    for (int i =0; i < n2; i++) R[i] = A[mid + i];

    L[n1] = 2147483647;
    R[n2] = 2147483647;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i + 1;
        } else {
            A[k] = R[j];
            j = j + 1;
        }
    }
    return A;
}

vector<int> mergeSort(vector<int> A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        A = mergeSort(A, left, mid);
        A = mergeSort(A, mid, right);
        A = merge(A, left, mid, right);
    }
    return A;
}

int main() {
    int n;
    cin >> n;
    vector<int> S;
    for (int i = 0; i < n; i++) scanf("%d ", &S);

    vector<int> A = mergeSort(S, 0, n);

    for (int i = 0; i < n; i++) cout << A[i] << " ";
    return 0;
}
