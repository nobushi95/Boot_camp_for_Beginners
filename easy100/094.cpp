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
    int A = S[0] - '0';
    int B = S[1] - '0';
    int C = S[2] - '0';
    int D = S[3] - '0';

    REPEQ(i, 0, 1) {
        REPEQ(j, 0, 1) {
            REPEQ(k, 0, 1) {
                ll sum = A;
                string op("   ");
                if (i == 0) {
                    sum -= B;
                    op[0] = '-';
                } else {
                    sum += B;
                    op[0] = '+';
                }
                if (j == 0) {
                    sum -= C;
                    op[1] = '-';
                } else {
                    sum += C;
                    op[1] = '+';
                }
                if (k == 0) {
                    sum -= D;
                    op[2] = '-';
                } else {
                    sum += D;
                    op[2] = '+';
                }
                if (sum == 7) {
                    cout << A << op[0] << B << op[1] << C << op[2] << D << "=7" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
