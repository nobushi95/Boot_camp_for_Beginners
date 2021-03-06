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
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<ll> X(N, 0);
    REP(i, 0, N) {
        if (i % 2 == 0) X[0] += A[i];
        else X[0] -= A[i];
    }

    REP(i, 1, N) {
        X[i] = 2 * A[i - 1] - X[i - 1];
    }

    REP(i, 0, N) {
        if (i == N - 1) cout << X[i] << endl;
        else cout << X[i] << " ";
    }

    return 0;
}
