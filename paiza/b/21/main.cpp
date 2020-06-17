#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    string A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        int len = A[i].size();
        if (A[i].substr(len - 1, 1) == "s" || 
            A[i].substr(len - 2, 2) == "sh" || 
            A[i].substr(len - 2, 2) == "ch" || 
            A[i].substr(len - 1, 1) == "o" || 
            A[i].substr(len - 1, 1) == "x") {

            cout << A[i] + "es";
        } else if (A[i].substr(len - 1, 1) == "f") {
            cout << A[i].substr(0, len - 1) + "ves";

        } else if (A[i].substr(len - 2, 2) == "fe") {
            cout << A[i].substr(0, len - 2) + "ves";

        } else if (A[i].substr(len - 1, 1) == "y" && 
                   (A[i].substr(len - 2, 1) != "a" && 
                    A[i].substr(len - 2, 1) != "i" && 
                    A[i].substr(len - 2, 1) != "u" && 
                    A[i].substr(len - 2, 1) != "e" && 
                    A[i].substr(len - 2, 1) != "o")) {

            cout << A[i].substr(0, len - 1) + "ies";

        } else {
            cout << A[i] + "s";
        }
        cout << endl;
    }

}
