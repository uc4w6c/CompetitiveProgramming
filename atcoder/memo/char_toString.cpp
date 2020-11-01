#include <bits/stdc++.h>
using namespace std;

// char型を文字列で出力 (https://atcoder.jp/contests/abc146/tasks/abc146_b)
// Nは指定した番号分、アルファベット順で N個後の文字に変換する
// Sは指定した文字
int main() {
    int N;
    string S;
    cin >> N >> S;
    int stringNo;
    for (char s : S) {
        stringNo = ((s - 'A') + N) % 26;
        printf("%c",('A' + stringNo));
    }
}
