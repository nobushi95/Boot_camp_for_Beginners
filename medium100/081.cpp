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
    ll N = S.length();

    bool isPreWhite = S[0] == 'W';
    ll c = 0;
    REP(i, 1, N) {
        if (isPreWhite) {
            if (S[i] == 'B') {
                c++;
                isPreWhite = false;
            }
        } else {
            if (S[i] == 'W') {
                c++;
                isPreWhite = true;
            }
        }
    }

    cout << c << endl;

    return 0;
}
