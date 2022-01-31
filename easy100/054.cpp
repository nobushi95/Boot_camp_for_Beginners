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
    vector<string> W(N);
    FORE(w, W) cin >> w;

    map<string, ll> tbl;
    FORE(w, W) {
        if (tbl[w] != 0) {
            cout << "No" << endl;
            return 0;
        }
        tbl[w]++;
    }

    REP(i, 1, N) {
        string pre = W[i - 1];
        string cur = W[i];
        if (pre[pre.size() - 1] != cur[0]) {
            cout << "No" << endl;
            return 0;
        }
        pre = cur;
    }

    cout << "Yes" << endl;

    return 0;
}