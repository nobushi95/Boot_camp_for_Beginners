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
    string S;
    cin >> N >> S;

    ll openCnt = 0, addOpen = 0;
    REP(i, 0, N) {
        if (S[i] == '(') openCnt++;
        else {
            openCnt--;
            if (openCnt < 0) chmax(addOpen, -openCnt);
        }
    }
    string ans = S;
    REP(i, 0, addOpen) ans = '(' + ans;
    
    openCnt = 0;
    REP(i, 0, ans.length()) {
        if (ans[i] == '(') openCnt++;
        else openCnt--;
    }

    REP(i, 0, openCnt) ans.push_back(')');

    cout << ans << endl;

    return 0;
}
