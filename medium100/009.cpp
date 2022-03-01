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
    ll A, B, C;
    cin >> A >> B >> C;

    map<ll, bool> tbl;
    const ll amari = A % B;
    tbl[amari] = true;

    ll curAmari = amari;
    while (true) {
        curAmari += amari;
        curAmari = curAmari % B;
        if (tbl[curAmari]) {
            cout << "NO" << endl;
            return 0;
        } else {
            tbl[curAmari] = true;
            if (curAmari == C) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    return 0;
}
