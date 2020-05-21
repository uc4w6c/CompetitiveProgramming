#include <bits/stdc++.h>
using namespace std;

// Stack スタック
int main() {
    char l[50];
    stack<int> input;
    int a;
    int b;
    // scanf("%s\n", &l);
    scanf("%[^\n]%*c", &l);
    string L = l;
    for (int i = 0; i < L.size(); i++) {
        // cout << "l:" << L[i] << endl;
        if (L[i] == '+') {
            a = input.top();
            input.pop();
            b = input.top();
            input.pop();
            input.push(b + a);

        } else if (L[i] == '-') {
            a = input.top();
            input.pop();
            b = input.top();
            input.pop();
            input.push(b - a);

        } else if (L[i] == '*') {
            a = input.top();
            input.pop();
            b = input.top();
            input.pop();
            // cout << "a:" << a << " b:" << b << endl;
            input.push(b * a);

        } else {
            if (L.substr(i, 1) != " ") {
                input.push(stoi(L.substr(i, 1)));
            }
        }
    }

    for (int i = 0; i < input.size(); i++) {
        cout << input.top() << " ";
        input.pop();
    }
}
