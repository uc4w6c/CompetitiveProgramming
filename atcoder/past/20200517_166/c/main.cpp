#include <bits/stdc++.h>
using namespace std;

// 展望台
struct Bill {
    int height;
    bool isMax;
};

// C - Peaks
int main() {
    int N, M;
    cin >> N >> M;

    // vector<int> H(N);
    vector<Bill> Bills(N);
    for (int i = 0; i < N; i++) {
        int H;
        cin >> H;
        Bills.at(i).height = H;
        Bills.at(i).isMax = true;
    }

    // それぞれの道を取得し比較
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        if (Bills.at(A -1).height == Bills.at(B -1).height) {
            Bills.at(A - 1).isMax = false;
            Bills.at(B - 1).isMax = false;
        } else if (Bills.at(A -1).height > Bills.at(B -1).height) {
            Bills.at(B - 1).isMax = false;
        } else if (Bills.at(A -1).height < Bills.at(B -1).height) {
            Bills.at(A - 1).isMax = false;
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (Bills.at(i).isMax) {
            count++;
        }
    }
    cout << count;
}
