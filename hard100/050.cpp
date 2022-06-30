#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

ll H, W;
vector<string> S;

ll dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

ll bfs() {
    vector<vector<ll>> res(H, vector<ll>(W, LLONG_MAX));
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<pair<ll, ll>> q;
    ll sx = 0, sy = 0;

    res[sy][sx] = 0;
    visited[sy][sx] = true;
    q.push({sx, sy});

    while (!q.empty()) {
        ll x, y;
        tie(x, y) = q.front();
        q.pop();

        if (x == W - 1 and y == H - 1) return res[y][x];

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

    return 0;
}

int main() {
    cin >> H >> W;
    S.resize(H);
    REP(i, 0, H) cin >> S[i];

    ll ans;
    ll res = bfs();
    if (!res) ans = -1;
    else {
        ans = H * W - res - 1;
        REP(y, 0, H) REP(x, 0, W) if (S[y][x] == '#') ans--;
    }

    cout << ans << endl;

    return 0;
}
