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

using mint = atcoder::modint1000000007;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    ll c1 = 0, c2 = 0;
    REP(i, 0, N) {
        REP(j, 0, N) {
            if (A[i] > A[j]) {
                if (i < j) c1++;
                else c2++;
            }
        }
    }

    mint a1 = c1;
    a1 *= K * (K + 1) / 2;
    mint a2 = c2;
    a2 *= K * (K - 1) / 2;
    mint ans = a1 + a2;
    cout << ans.val() << endl;

    return 0;
}
