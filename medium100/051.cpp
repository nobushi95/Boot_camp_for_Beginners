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
    vector<ll> X(N);
    FORE(x, X) cin >> x;

    vector<ll> cpX = X;
    sort(ALL(cpX));

    map<ll, ll> ans;
    ll mid = N / 2;
    REP(i, 0, N) {
        if (i < mid) {
            ans[cpX[i]] = cpX[mid];
        } else {
            ans[cpX[i]] = cpX[mid - 1];
        }
    }

    FORE(x, X) {
        cout << ans[x] << endl;
    }

    return 0;
}
