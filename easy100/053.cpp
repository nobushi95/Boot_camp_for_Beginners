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
    vector<int> a(M), b(M);
    REP(i, 0, M) cin >> a.at(i) >> b.at(i);

    map<int , int> tbl;
    REP(i, 0, M) {
        tbl[a.at(i)]++;
        tbl[b.at(i)]++;
    }

    REP(i, 1, N+1) {
        cout << tbl[i] << endl;
    }

    return 0;
}