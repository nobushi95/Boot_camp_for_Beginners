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
    ll N;
    string S;
    cin >> N >> S;

    vector<ll> accE(N, 0), accW(N, 0);
    accE[0] = S[0] == 'E' ? 1 : 0;
    accW[0] = S[0] == 'W' ? 1 : 0;
    REP(i, 1, N) {
        char c = S[i];
        if (c == 'E') {
            accW[i] = accW[i - 1];
            accE[i] = accE[i - 1] + 1;
        } else if (c == 'W') {
            accW[i] = accW[i - 1] + 1;
            accE[i] = accE[i - 1];
        }
    }

    ll ans = LLONG_MAX;
    REP(i, 0, N) {
        ll eSide = 0;
        if (i > 0) eSide = accW[i - 1];
        ll wSide = accE[N - 1] - accE[i];
        ll cur = eSide + wSide;
        chmin(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
