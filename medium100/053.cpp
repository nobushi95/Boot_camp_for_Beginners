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
    vector<ll> A(N + 2);
    A[0] = 0;
    REP(i, 1, N + 1) cin >> A[i];
    A[N + 1] = 0;

    ll sum = 0;
    REP(i, 0, N + 1) {
        sum += abs(A[i] - A[i + 1]);
    }

    REP(i, 1, N + 1) {
        ll ans = sum;
        ans -= abs(A[i - 1] - A[i]);
        ans -= abs(A[i] - A[i + 1]);
        ans += abs(A[i - 1] - A[i + 1]);
        cout << ans << endl;
    }

    return 0;
}
