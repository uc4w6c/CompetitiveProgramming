#include <bits/stdc++.h>
using namespace std;
 
// betrue12さんの答え
void chmin(int& a, int b){
    a = min(a, b);
}
 
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for(int& a : A) cin >> a;
    for(int& a : B) cin >> a;
 
    vector<vector<int>> dp(N+1, vector<int>(M+1, 1e9));
    dp[0][0] = 0;
    for(int i=0; i<=N; i++) for(int j=0; j<=M; j++){
        if(i<N) chmin(dp[i+1][j], dp[i][j] + 1);
        if(j<M) chmin(dp[i][j+1], dp[i][j] + 1);
        if(i<N && j<M) chmin(dp[i+1][j+1], dp[i][j] + (A[i] != B[j]));
    }
    cout << dp[N][M] << endl;
    return 0;
}