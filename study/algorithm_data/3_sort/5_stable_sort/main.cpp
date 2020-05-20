#include <bits/stdc++.h>
using namespace std;

vector<string> BubbleSort(vector<string> A, int N);
vector<string> SelectionSort(vector<string> A, int N);

// Stable Sort : 安定なソート
int main() {
    int N;
    cin >> N;

    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    auto bubble = BubbleSort(A, N);
    for (int i = 0; i < N; i++) {
        cout << bubble.at(i) << " ";
    }
    cout  << endl << "Bubble" << endl;

    auto selection = SelectionSort(A, N);
    for (int i = 0; i < N; i++) {
        cout << selection.at(i) << " ";
    }
    cout  << endl << "Stable" << endl;
}

vector<string> BubbleSort(vector<string> A, int N) {
    bool isContinue = true;
    for (int i = 0; isContinue; i++) {
        isContinue = false;
        cout << i << endl;
        for (int j = N - 1; j > 0; j--) {
            if (A.at(j).at(1) < A.at(j - 1).at(1)) {
                swap(A[j], A[j - 1]);
                isContinue = true;
            }
        }
    }
    return A;
}

vector<string> SelectionSort(vector<string> A, int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A.at(j).at(1) < A.at(minj).at(1)) {
                minj = j;
            }
        }
        swap(A[i], A[minj]);
    }
    return A;
}