#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll N;
    cin >> N;
    vector<string> s(N);
    FORE(si, s) cin >> si;
    ll M;
    cin >> M;
    vector<string> t(M);
    FORE(ti, t) cin >> ti;

    map<string, ll> tbl;
    FORE(si, s) {
        tbl[si]++;
    }
    FORE(ti, t){
        tbl[ti]--;
    }

    ll max = LLONG_MIN;
    FORE(t, tbl) {
        chmax(max, t.second);
    }

    chmax(max, 0LL);

    cout << max << endl;

    return 0;
}
