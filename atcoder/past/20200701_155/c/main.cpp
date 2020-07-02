#include <bits/stdc++.h>
using namespace std;

// C - Poll
// 途中
int main() {
    int N;
    cin >> N;
    map<string, int> betMap;
    string S;
    for (int i = 0; i < N; i++) {
        cin >> S;
        betMap[S]++;
    }

    for (auto bet : betMap){
        std::cout << bet.first << " : " << bet.second << "\n";
    }

}
