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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, K;
    string S;
    cin >> N >> K >> S;

    vector<pair<char, ll>> b;
    char pre = S[0];
    ll count = 1;
    REP(i, 1, N) {
        if (pre != S[i]) {
            b.push_back({pre, count});
            pre = S[i];
            count = 1;
        } else {
            count++;
        }
    }
    b.push_back({pre, count});

    ll ans = 0, sum = 0, l = 0, zero = 0;
    REP(r, 0, b.size()) {
        sum += b[r].second;
        if (b[r].first == '0') zero++;

        while (K < zero) {
            sum -= b[l].second;
            if (b[l].first == '0') zero--;
            l++;
        }
        chmax(ans, sum);
    }

    cout << ans << endl;

    return 0;
}
