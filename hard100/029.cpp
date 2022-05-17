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
    sort(ALL(A));

    vector<ll> acc(N, 0);
    acc[0] = A[0];
    REP(i, 1, N) {
        acc[i] = acc[i - 1] + A[i];
    }

    ll ans = 1;
    REP(i, 0, N - 1) {
        ll size = acc[i];
        ll idx = i;
        while (true) {
            auto itr = upper_bound(A.begin() + i + 1, A.end(), size * 2);
            if (itr == A.end()) {
                ans++;
                break;
            }
            ll newIdx = distance(A.begin(), itr - 1);
            if (newIdx == idx) break;
            idx = newIdx;
            if (size * 2 < A[newIdx]) break;
            size = acc[newIdx];
            if (size * 2 >= A.back()) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
