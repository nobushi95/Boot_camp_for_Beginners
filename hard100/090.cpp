#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

vector<ll> ans;
vector<vector<pair<ll, ll>>> g(100010);

void dfs(ll cur, ll parent, ll color) {
    ans[cur] = color;
    FORE(p, g[cur]) {
        if (p.first == parent) continue;
        if (p.second % 2 == 0) dfs(p.first, cur, color);
        else dfs(p.first, cur, 1 - color);
    }
}

int main() {
    ll N;
    cin >> N;
    ans.resize(N);
    vector<ll> u(N), v(N), w(N);
    REP(i, 0, N) cin >> u[i] >> v[i] >> w[i];

    REP(i, 0, N - 1) {
        g[u[i] - 1].push_back({v[i] - 1, w[i]});
        g[v[i] - 1].push_back({u[i] - 1, w[i]});
    }

    dfs(0, -1, 0);

    FORE(a, ans) cout << a << endl;

    return 0;
}
