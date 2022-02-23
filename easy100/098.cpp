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
    vector<ll> L(3);
    cin >> L[0] >> L[1] >> L[2];
    
    sort(ALL(L));
    ll mid = L[2] / 2;

    ll r = L[0] * L[1] * mid;
    ll b = L[0] * L[1] * (L[2] - mid);
    ll d = abs(b - r);
    
    cout << d << endl;

    return 0;
}
