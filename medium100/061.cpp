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
    string S;
    cin >> S;
    ll Q;
    cin >> Q;

    deque<char> deq;
    FORE(s, S) deq.push_back(s);
    bool rev = false;

    REP(i, 0, Q) {
        ll t;
        cin >> t;
        if (t == 1) {
            rev = !rev;
        } else if (t == 2) {
            ll f;
            char c;
            cin >> f >> c;
            if (f == 1) {
                if (!rev) deq.push_front(c);
                else deq.push_back(c);
            } else if (f == 2) {
                if (!rev) deq.push_back(c);
                else deq.push_front(c);
            }
        }
    }

    string ans = "";
    if (!rev) {
        FORE(d, deq) ans.push_back(d);
    } else {
        for (auto itr = deq.rbegin(); itr != deq.rend(); itr++) ans.push_back(*itr);
    }

    cout << ans << endl;

    return 0;
}
