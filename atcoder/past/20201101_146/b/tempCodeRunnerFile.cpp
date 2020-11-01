#include <bits/stdc++.h>
using namespace std;

// 
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
