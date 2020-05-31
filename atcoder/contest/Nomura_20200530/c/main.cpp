#include <bits/stdc++.h>
using namespace std;

// 出来なかった！
// 答えはExample1を見るべし


// ノード
struct Node {
    int on;
    int *nodes[2];
};
Node *firstNode;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        // TODO: 最初に全てのノードが繋がった状態を作成してそこから最下層のAから順に対象の数まで削除する
    }



}

/*
入力例 2 
4
0 0 1 0 2

答え: 10

0 - 2 
  - 1 - 4
      - 3 
          - 6
          - 5 - a
              - a
                2



*/