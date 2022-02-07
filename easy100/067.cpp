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
    ll N;
    cin >> N;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    map<string, ll> tbl;
    int max = 0;
    FORE(s, S) {
        tbl[s]++;
        if (max < tbl[s]) max = tbl[s];
    }

    FORE(t, tbl) {
        if (t.second == max) {
            cout << t.first << endl;
        }
    }

    return 0;
}