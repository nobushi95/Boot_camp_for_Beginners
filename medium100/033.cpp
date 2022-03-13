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
    string s;
    cin >> s;

    string ans;
    FORE(si, s) {
        if (si == '0') ans.push_back(si);
        else if (si == '1') ans.push_back(si);
        else if (si == 'B' && !ans.empty()) ans.pop_back();
    }

    cout << ans << endl;

    return 0;
}
