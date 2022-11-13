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

vector<vector<pair<ll, ll>>> graph(100010);
vector<ll> ans;

void dfs(ll cur, ll parent, ll color) {
    set<ll> used;
    used.insert(color);
    ll newColor = 1;
    FORE(to, graph[cur]) {
        if (to.first == parent) continue;
        while (used.count(newColor) > 0) newColor++;
        ans[to.second] = newColor;
        dfs(to.first, cur, newColor);
        newColor++;
    }
}

int main() {
    ll N;
    cin >> N;
    ans.resize(N - 1);
    vector<ll> a(N - 1), b(N - 1);
    REP(i, 0, N - 1) cin >> a[i] >> b[i];

    REP(i, 0, N - 1) {
        graph[a[i] - 1].push_back({b[i] - 1, i});
        graph[b[i] - 1].push_back({a[i] - 1, i});
    }

    dfs(0, -1, 0);

    ll ansColor = 0;
    REP(i, 0, N) chmax(ansColor, (ll)graph[i].size());
    cout << ansColor << endl;
    REP(i, 0, N - 1) cout << ans[i] << endl;

    return 0;
}
