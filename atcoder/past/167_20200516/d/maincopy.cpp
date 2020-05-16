#include <bits/stdc++.h>
using namespace std;

// D - Teleporter
int main() {
    int N;
    long K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    vector<int> rated;
    int nowPoint = 1;
    for (long i = 1; i <= K; i++) {
        // cout << "nowPoint:" << nowPoint << endl;
        // cout << "A.at(nowPoint):" << A.at(nowPoint - 1) << endl;

        if (rated.empty() == false) {
            auto itr = find(rated.begin(), rated.end(), nowPoint);
            if (itr != rated.end()) {

                /*
                cout << "rated.size():" << rated.size() << endl;
                cout << "i:" << i << endl;
                cout << "rated.size() - i:" << (rated.size() - nowPoint) << endl;
                cout << ((K - i) % (rated.size() - nowPoint)) << endl;
                cout << "*itr:" << *itr << endl;

                cout << *itr + ((K - i) % (rated.size() - nowPoint)) << endl;
                */
               cout << "before" << endl;
                cout << "rated.at(" << *itr << " + ((" << K << " - " << i << ") % ";
                cout << "(" << rated.size() << " - " << nowPoint << ")))" << endl;

                cout << "after" << endl;
                cout << "rated.at(" << *itr << " + ";
                cout << "(" << rated.size() << " - " << nowPoint << ")))";
                cout << " % ";
                cout << "((" << K << " - " << i << ")";
                cout << endl;
                
                // cout << ((rated.size() - nowPoint) % (K - i)) << endl;
                // cout << rated.at(*itr + ((K - i) % (rated.size() - nowPoint)));
                if ((K - i) != 0) {
                    cout << rated.at(*itr + ((rated.size() - nowPoint + 1) % (K - i)) - 1) << endl;
                    cout << A.at(rated.at(*itr + ((rated.size() - nowPoint + 1) % (K - i)) - 1) - 1);
                    return 0;
                }
            }
        }
        rated.push_back(nowPoint);
        nowPoint = A.at(nowPoint - 1);
    }
    cout << nowPoint;
}
