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
    vector<ll> x(N), y(N);
    REP(i, 0, N) {
        cin >> x[i] >> y[i];
    }

    vector<ll> p(N);
    int n = 0;
    generate(ALL(p), [&n]() { auto t = n; n++; return t; });

    long double sum = 0.0;
    ll f = 0;
    do {
        f++;
        REP(i, 0, N - 1) {
            ll xsq = (x[p[i]] - x[p[i + 1]]) * (x[p[i]] - x[p[i + 1]]);
            ll ysq = (y[p[i]] - y[p[i + 1]]) * (y[p[i]] - y[p[i + 1]]);
            long double d = sqrtl(xsq + ysq);
            sum += d;
        }
    } while (next_permutation(ALL(p)));

    long double ans = sum / f;
    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}
