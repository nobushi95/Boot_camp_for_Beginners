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
    string S, T;
    cin >> S >> T;

    REPEQ(i, 0, S.size()) {
        if (S == T) {
            cout << "Yes" << endl;
            return 0;
        }
        S = S[S.size() - 1] + S.substr(0, S.size() - 1);
    }

    cout << "No" << endl;

    return 0;
}