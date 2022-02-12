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
    int N, M;
    cin >> N >> M;
    map<ll, pair<bool, ll>> tbl;
    REP(i, 0, M) {
        ll num;
        cin >> num;
        string result;
        cin >> result;

        if (!tbl[num].first) {
            if (result == "AC") {
                tbl[num].first = true;
            } else {
                tbl[num].second++;
            }
        }
    }

    ll ac = 0;
    ll p = 0;
    FORE(t, tbl) {
        if (t.second.first) { 
            ac++;
            p += t.second.second;
        }
    }

    cout << ac << " " << p << endl;

    return 0;
}
