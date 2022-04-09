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
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    map<ll, ll> tbl;
    FORE(ai, a) tbl[ai]++;

    if (N % 3 != 0) {
        if (tbl[0] == N) {
            cout << "Yes" << endl;
            return 0;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<ll> num;
    FORE(t, tbl) num.push_back(t.first);

    if (num.size() == 1) {
        if (tbl[0] == N) {
            cout << "Yes" << endl;
            return 0;
        } else {
            cout << "No" << endl;
            return 0;
        }
    } else if (num.size() == 2) {
        if (tbl[0] == N / 3) {
            cout << "Yes" << endl;
            return 0;
        } else {
            cout << "No" << endl;
            return 0;
        }
    } else if (num.size() == 3) {
        if ((num[0] ^ num[1] ^ num[2]) != 0) {
            cout << "No" << endl;
            return 0;
        }
        if (tbl[num[0]] == N / 3 && tbl[num[1]] == N / 3 && tbl[num[2]] == N / 3) {
            cout << "Yes" << endl;
            return 0;
        } else {
            cout << "No" << endl;
            return 0;
        }
    } else {
        cout << "No" << endl;
        return 0;
    }

    return 0;
}
