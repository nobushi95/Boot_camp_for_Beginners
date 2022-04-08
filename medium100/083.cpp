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
    vector<ll> b(N);
    FORE(bi, b) cin >> bi;

    REP(i, 0, N) {
        if (b[i] > i + 1) {
            cout << -1 << endl;
            return 0;
        }
    }

    vector<ll> ans(N);
    REP(i, 0, N) {
        RREP(j, b.size() - 1, 0) {
            if (j + 1 == b[j]) {
                ans[N - 1 - i] = j + 1;
                b.erase(b.begin() + j);
                break;
            }
        }
    }

    FORE(a, ans) {
        cout << a << endl;
    }

    return 0;
}
