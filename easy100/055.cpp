#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

bool isSquare(ll n) {
    int i = 1;
    while (true) {
        int square = i * i;
        if (square > n) {
            return false;
        }
        if (square == n) {
            return true;
        }
        i++;
    }
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    REP(i, 0, N) {
        REP(j, 0, D) {
            cin >> X.at(i).at(j);
        }
    }

    int count = 0;
    REP(i, 0, N) {
        REP(j, i + 1, N) {
            ll dist = 0;
            REP(k, 0, D) {
                dist += pow((X[i][k] - X[j][k]), 2);
            }
            if (isSquare(dist)) count++;
        }
    }

    cout << count << endl;
    
    return 0;
}