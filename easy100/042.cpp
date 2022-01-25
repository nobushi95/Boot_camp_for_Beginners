#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>());
    REP(i, 0, N) {
        int K;
        cin >> K;
        vector<int> a(K);
        FORE(ai, a) cin >> ai;
        A.at(i) = a;
    }

    map<int, int> tbl;
    REP(i, 0, N) {
        REP(j, 0, A.at(i).size()) {
            tbl[A.at(i).at(j)]++;
        }
    }

    int count = 0;
    FORE(t, tbl) {
        if (t.second == N) count++;
    }

    cout << count << endl;

    return 0;
}