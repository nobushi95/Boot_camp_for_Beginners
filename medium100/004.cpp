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
    string S;
    cin >> S;

    if (S.size() == 2) {
        cout << 0 << endl;
    }

    for (int i = 2; i < S.length(); i+=2) {
        string s = S.substr(0, S.length() - i);
        string first = s.substr(0, s.length() / 2);
        string second = s.substr(s.length() / 2);
        if (first == second) {
            cout << s.length() << endl;
            break;
        }
    }

    return 0;
}
