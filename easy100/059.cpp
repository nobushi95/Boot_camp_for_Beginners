#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string S;
    cin >> S;
    
    if (S[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    int cCount = 0;
    int cPos;
    REPEQ(i, 2, S.size() - 2) {
        if (S[i] == 'C') {
            cPos = i;
            cCount++;
        }
    }

    if (cCount != 1) {
        cout << "WA" << endl;
        return 0;
    }

    REP(i, 1, S.size()) {
        if (i != cPos) {
            if ((S[i] < 'a') || (S[i] > 'z')) {
                cout << "WA" << endl;
                return 0;
            }
        }
    }

    cout << "AC" << endl;

    return 0;
}