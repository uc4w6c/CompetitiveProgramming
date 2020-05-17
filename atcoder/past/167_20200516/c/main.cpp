#include <bits/stdc++.h>
using namespace std;

// C - Skill Up
// TODO: 失敗しているからどこかのタイミングでもう一度やりたい
struct book {
    int price;
    vector<int> pointList;
    bool operator<(const book& right) const {
        return price == right.price ? price < right.price : price < right.price;
    }
};

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<book> books(N);
    vector<int> sumPointList(M);
    for (int i = 0; i < N; i++) {
        cin >> books.at(i).price;
        vector<int> pointList(M);
        for (int j = 0; j < M; j++) {
            cin >> pointList.at(j);
            sumPointList.at(j) += pointList.at(j);
        }
        books.at(i).pointList = pointList;
    }

    for (int i = 0; i < M; i++) {
        if (sumPointList.at(i) < X) {
            cout << -1;
            return 0;
        }
    }

    // 安い順に変更
    sort(books.begin(), books.end());

    for (int i = 0; i < N; i++) {
        

    }

    int minPrice = 0;
    for (int i = 0; i < N; i++) {

        for (int j = i; i < N; j++) {

        }
    }


}
