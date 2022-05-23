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
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<bool> b(N + 1);
    RREP(i, N, 1) {
        ll other = 0;
        for (ll x = i * 2; x <= N; x += i) if (b[x]) other++;
        if (other % 2 != a[i - 1]) b[i] = true;
    }

    vector<ll> ans;
    REPEQ(i, 1, N) {
        if (b[i]) ans.push_back(i);
    }

    ll M = ans.size();
    cout << M << endl;
    REP(i, 0, M) {
        if (i == M - 1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }

    return 0;
}
