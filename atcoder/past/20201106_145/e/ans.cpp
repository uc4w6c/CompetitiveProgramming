#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, T;
    cin >> N >> T;
    int A, B;
    vector<pair<int, int>> cooked(N);
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        cooked[i] = make_pair(A, B);
    }
    sort(cooked.begin(), cooked.end());

    long long ans = 0;
    vector<vector<long long>> dp(N + 1, vector<long long>(T, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < T; j++) {
            dp[i + 1][j] = dp[i][j];
            ans = max(dp[i + 1][j] + cooked[i].second, ans);
            // 対象の料理作成時間がT(j)以下なら、
            // dp(T[j] - 料理時間) + 料理の満足度で、対象料理を使った最大時間を求められる。あとはそれを比較
            if (j - cooked[i].first >= 0) {
                dp[i + 1][j] = max(dp[i][j - cooked[i].first] + cooked[i].second, dp[i][j]);
            }
        }
    }
    cout << ans;

}
