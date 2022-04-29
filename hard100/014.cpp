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

ll F(ll A, ll B) {
    ll ret = max(to_string(A).size(), to_string(B).size());
    return ret;
}

int main() {
    ll N;
    cin >> N;

    ll ans = LLONG_MAX;
    for (ll A = 1; A * A <= N; A++) {
        if (N % A != 0) continue;
        ll B = N / A;
        chmin(ans, F(A, B));
    }

    cout << ans << endl;

    return 0;
}
