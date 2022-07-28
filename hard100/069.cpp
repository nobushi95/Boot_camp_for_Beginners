#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

ll N;

vector<ll> makeCoefficient(ll b0, ll b1) {
    vector<ll> B(N);
    B[0] = b0, B[1] = b1;
    REP(i, 1, N - 1) {
        if (B[i] == -1) {
            B[i] = -2;
            B[i + 1] = 1;
        } else {
            B[i] = 2;
            B[i + 1] = -1;
        }
    }
    sort(ALL(B));
    return B;
}

int main() {
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    sort(ALL(A));
    auto B1 = makeCoefficient(1, -1);
    auto B2 = makeCoefficient(-1, 1);

    ll sum1 = 0, sum2 = 0;
    REP(i, 0, N) {
        sum1 += A[i] * B1[i];
        sum2 += A[i] * B2[i];
    }

    cout << max(sum1, sum2) << endl;

    return 0;
}
