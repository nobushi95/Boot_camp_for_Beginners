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
    vector<ll> A(N), B(N);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    ll sumA = accumulate(ALL(A), 0LL);
    ll sumB = accumulate(ALL(B), 0LL);
    if (sumA < sumB) {
        cout << -1 << endl;
        return 0;
    }

    vector<ll> over;
    ll under = 0;
    ll underSum = 0;
    REP(i, 0, N) {
        ll d = A[i] - B[i];
        if (d < 0) {
            under++;
            underSum -= d;
        } else {
            over.push_back(d);
        }
    }

    if (under == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(ALL(over), greater<ll>());
    ll ans = under;
    ll o = 0;
    REP(i, 0, over.size()) {
        o += over[i];
        ans++;
        if (o >= underSum) break;
    }

    cout << ans << endl;

    return 0;
}
