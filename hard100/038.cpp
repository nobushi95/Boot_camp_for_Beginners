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

ll H, W;
vector<string> S;

ll dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

vector<vector<ll>> bfs(ll sx, ll sy) {
    vector<vector<ll>> res(H, vector<ll>(W, LLONG_MAX));
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<pair<ll, ll>> q;

    res[sy][sx] = 0;
    visited[sy][sx] = true;
    q.push({sx, sy});

    while (!q.empty()) {
        ll x, y;
        tie(x, y) = q.front();
        q.pop();

        REP(d, 0, 4) {
            ll xx = x + dx[d];
            ll yy = y + dy[d];
            if (0 <= xx && xx < W && 0<= yy && yy < H) {
                if (S[yy][xx] != '#' && !visited[yy][xx]) {
                    res[yy][xx] = res[y][x] + 1;
                    visited[yy][xx] = true;
                    q.push({xx, yy});
                }
            }
        }
    }

    return res;
}

int main() {
    cin >> H >> W;
    S.resize(H);
    FORE(s, S) cin >> s;

    ll ans = 0;
    REP(sy, 0, H) REP(sx, 0, W) {
        if (S[sy][sx] == '#') continue;
        auto res = bfs(sx, sy);
        REP(y, 0, H) REP(x, 0, W) {
            if (S[y][x] == '#') continue;
            chmax(ans, res[y][x]);
        }
    }

    cout << ans << endl;

    return 0;
}
