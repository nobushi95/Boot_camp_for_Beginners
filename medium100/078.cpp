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
    ll K;
    string S;
    cin >> S >> K;
    ll N = S.size();

    ll a = 1;
    REP(i, 1, N) {
        if (S[i - 1] == S[i]) a++;
        else break;
    }
    if (a == N) {
        cout << N * K / 2 << endl;
        return 0;
    }

    ll b = 1;
    RREP(i, N - 1, 1) {
        if (S[i - 1] == S[i]) b++;
        else break;
    }

    ll same = 0;
    REP(i, 1, N) {
        if (S[i - 1] == S[i]) {
            same++;
            S[i] = 'D';
        }
    }

    ll ans;
    if (S.front() == S.back()) {
        ans = K * same + (K - 1) * ((a + b) / 2 - a / 2 - b / 2);
    } else {
        ans = K * same;
    }

    cout << ans << endl;
    
    return 0;
}
