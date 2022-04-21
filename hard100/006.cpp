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
    string S, T;
    cin >> S >> T;

    vector<ll> annot;
    REP(i, 0, S.size()) {
        if (S[i] == '?' || S[i] == T[0]) {
            bool isMatch = true;
            REP(j, 1, T.size()) {
                if (i + j > S.size() - 1) {
                    isMatch = false;
                    break;
                }
                if (S[i + j] != T[j] && S[i + j] != '?') {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) annot.push_back(i);
        }
    }

    if (annot.size() == 0) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    set<string> candidates;
    FORE(i, annot) {
        string candidate = S;
        REP(j, i, i + T.size()) {
            candidate[j] = T[j - i];
        }
        REP(j, 0, candidate.size()) {
            if (candidate[j] == '?') candidate[j] = 'a';
        }
        candidates.insert(candidate);
    }

    cout << *candidates.begin() << endl;

    return 0;
}
