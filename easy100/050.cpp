#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string A, B;
    cin >> A >> B;

    int aDigit = A.size();
    int bDigit = B.size();

    if (aDigit > bDigit) {
        cout << "GREATER" << endl;
        return 0;
    }

    if (aDigit < bDigit) {
        cout << "LESS" << endl;
        return 0;
    }

    REP(i, 0, A.size()) {
        char a = A[i], b = B[i];
        if (a > b) {
            cout << "GREATER" << endl;
            return 0;
        }
        if (a < b) {
            cout << "LESS" << endl;
            return 0;
        }
    }

    cout << "EQUAL" << endl;

    return 0;
}