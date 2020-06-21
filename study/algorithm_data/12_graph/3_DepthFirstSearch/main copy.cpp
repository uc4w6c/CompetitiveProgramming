#include <bits/stdc++.h>
using namespace std;

struct Result {
    int no;
    int startNo;
    int EndNo;
    vector<int> nodes;
};
Result resultes[100];
// vector<vector<int>> nodes(100);

void print(vector<vector<int>> nodes, int currentNo, int count) {
    for (int value : nodes[currentNo]) {
    }
    cout << 
}

int main() {
    int N;
    cin >> N;
    // vector<vector<int>> nodes(N);

    int U, K, V;
    for (int i = 0; i < N; i++) {
        cin >> U >> K;
        vector<int> values(K);
        for (int j = 0; j < K; j++) {
            cin >> V;
            values[j] = V;
        }
        nodes[i] = values;
    }




    // debug
    for (int i = 0; i < N; i++) {
        for (int value : nodes[i]) {
            cout << value << " ";
        }
        cout << endl;
    }

}
