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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<ll> l(Q), r(Q);
    REP(i, 0, Q) cin >> l[i] >> r[i];

    vector<ll> acc(N, 0);
    REP(i, 1, N) {
        acc[i] = acc[i - 1];
        if (S[i - 1] == 'A' && S[i] == 'C') {
            acc[i]++;
        }
    }

    REP(i, 0, Q) {
        ll ans;
        if (l[i] - 1 < 0) {
            ans = acc[r[i] - 1];
        } else {
            ans = acc[r[i] - 1] - acc[l[i] - 1];
        }
        cout << ans << endl;
    }

    return 0;
}
