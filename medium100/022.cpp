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

    long double ans = 0.0;
    REPEQ(i, 1, min(N, K - 1)) {
        ll n = i;
        long double kakuritu = static_cast<long double>(1.0) / N;
        while (n <= K - 1) {
            kakuritu /= 2.0;
            n *= 2;
        }
        ans += kakuritu;
    }

    if (N >= K) {
        ans += static_cast<long double>(N - K + 1) / N;
    }

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}
