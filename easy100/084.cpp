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
    vector<ll> A(N + 1);
    FORE(a, A) cin >> a;
    vector<ll> B(N);
    FORE(b, B) cin >> b;

    ll ans = 0;
    RREP(i, N - 1, 0) {
        ll b_nokori = B[i] - A[i + 1];
        if (b_nokori > 0) {
            ans += A[i + 1];
            ll a_nokori = A[i] - b_nokori;
            if (a_nokori > 0) {
                ans += b_nokori;
                A[i] = a_nokori;
            } else {
                ans += A[i];
                A[i] = 0;
            }
        } else {
            ans += B[i];
        }
    }

    cout << ans << endl;

    return 0;
}
