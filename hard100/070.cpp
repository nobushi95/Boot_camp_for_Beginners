#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;
    FORE(c, C) cin >> c;

    sort(ALL(A));
    sort(ALL(B));
    sort(ALL(C));

    ll ans = 0;
    REP(i, 0, N) {
        ll b = B[i];
        auto aitr = lower_bound(ALL(A), b);
        auto citr = upper_bound(ALL(C), b);

        ans += (aitr - A.begin()) * (N - (citr - C.begin()));
    }

    cout << ans << endl;

    return 0;
}
