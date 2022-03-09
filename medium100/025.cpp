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

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    map<ll, ll> tbl;
    FORE(a, A) tbl[a]++;

    vector<ll> tbl1;
    FORE(t, tbl) tbl1.push_back(t.second);

    sort(ALL(tbl1), greater<ll>());

    ll ans = 0;
    ll size = tbl.size();
    while (size > K) {
        ans += tbl1.back();
        tbl1.front() += tbl1.back();
        tbl1.pop_back();
        size--;
    }

    cout << ans << endl;

    return 0;
}
