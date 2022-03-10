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
    string s, t;
    cin >> N >> s >> t;

    ll ans = 2 * N;
    REP(i, 0, N) {
        REPEQ(j, 1, N) {
            string sTail = s.substr(i);
            string tHead = t.substr(0, j);
            if (sTail == tHead) {
                chmin(ans, i + ll(sTail.size()) + N - j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
