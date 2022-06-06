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
    string s;
    cin >> s;
    ll N = s.length();

    ll ans = 0;
    ll l = 0, r = N - 1;
    while (l <= r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        } else if (s[l] == 'x') {
            ans++;
            l++;
        } else if (s[r] == 'x') {
            ans++;
            r--;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << ans << endl;
    return 0;
}
