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

ll N, M;
vector<string> A, B;

bool isSameImage(ll x, ll y) {
    if (x + M - 1 >= N || y + M - 1 >= N) return false;

    REP(i, 0, M) REP(j, 0, M) {
        if (A[x + i][y + j] != B[i][j]) return false;
    }
    return true;
}

int main() {
    cin >> N >> M;
    A.resize(N);
    B.resize(M);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    ll ans = 0;
    REP(i, 0, N) REP(j, 0, N) {
        if (isSameImage(i, j)) ans++;
    }

    if (ans > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
