#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << s << endl;
        return 0;
    }

    int a = 0;
    FORE(si, s) {
        a += si - '0';
    }

    int ans  = s[0] - '0' - 1;
    ans += 9 * (s.size() - 1);

    chmax(ans, a);

    cout << ans << endl;
    
    return 0;
}