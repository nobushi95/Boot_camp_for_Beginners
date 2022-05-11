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
    vector<ll> C(N), S(N), F(N);
    REP(i, 1, N) cin >> C[i] >> S[i] >> F[i];

    REPEQ(start, 1, N) {
        if (start == N) {
            cout << 0 << endl;
            return 0;
        }
        ll elapsed = S[start];
        REP(i, start, N) {
            if (elapsed < S[i]) elapsed = S[i];
            ll tmp = (elapsed - S[i]) % F[i];
            if (tmp == 0) elapsed += C[i];
            else {
                elapsed += F[i] - tmp + C[i];
            }
        }
        cout << elapsed << endl;
    }

    return 0;
}
