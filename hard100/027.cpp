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

vector<vector<ll>> tbl;
vector<ll> node;

void dfs(ll cur, ll pa = -1) {
    FORE(to, tbl[cur]) {
        if (pa != to) {
            node[to] += node[cur];
            dfs(to, cur);
        }
    }
}

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<ll> a(N - 1), b(N - 1), p(Q), x(Q);
    REP(i, 0, N - 1) cin >> a[i] >> b[i];
    REP(i, 0, Q) cin >> p[i] >> x[i];

    tbl.resize(N + 10);
    node.resize(N + 10);

    REP(i, 0, N - 1) {
        ll ai = a[i] - 1; 
        ll bi = b[i] - 1;
        tbl[ai].push_back(bi);
        tbl[bi].push_back(ai);
    }

    REP(i, 0, Q) {
        node[p[i] - 1] += x[i];
    }

    dfs(0);

    REP(i, 0, N) {
        cout << node[i];
        if (i == N - 1) cout << endl;
        else cout << " ";
    }

    return 0;
}
