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
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> P(N);
    REP(i, 0, N) {
        cin >> S[i] >> P[i];
    }

    map<string, vector<pair<int, int>>> tbl;
    REP(i, 0, N) {
        tbl[S[i]].push_back({P[i], i + 1});
    }

    FORE(t, tbl) {
        sort(t.second.begin(), t.second.end(), [](const auto &left, const auto &right) { return left.first > right.first; });
        FORE(r, t.second) {
            cout << r.second << endl;
        }
    }

    return 0;
}