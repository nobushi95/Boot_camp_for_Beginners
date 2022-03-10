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
    ll N, K;
    cin >> N >> K;
    vector<ll> p(N);
    FORE(pi, p) cin >> pi;

    ll MAX_SIZE = 1001;
    vector<ll> accSum(MAX_SIZE);
    ll n = 0;
    generate(ALL(accSum), [&n]() {ll t = n; n++; return t;});
    REP(i, 1, MAX_SIZE) {
        accSum[i] += accSum[i - 1];
    }

    vector<double> acc(N);
    acc[0] = double(accSum[p[0]]) / p[0];
    REP(i, 1, N) {
        acc[i] = acc[i - 1] + double(accSum[p[i]]) / p[i];
    }

    double ans = acc[K - 1];
    REP(i, 0, N - K) {
        double c = acc[i + K] - acc[i];
        chmax(ans, c);
    }

    cout << fixed << setprecision(8) << ans << endl;

    return 0;
}
