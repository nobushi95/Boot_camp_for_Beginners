#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (auto &p : P) cin >> p;
    for (auto &q : Q) cin >> q;

    vector<int> PS(P), QS(Q);
    sort(PS.begin(), PS.end());
    sort(QS.begin(), QS.end());

    int a = 1;
    do {
        if (PS == P) break;
        a++;
    } while (next_permutation(PS.begin(), PS.end()));

    int b = 1;
    do {
        if (QS == Q) break;
        b++;
    } while (next_permutation(QS.begin(), QS.end()));

    cout << abs(a - b) << endl;

    return 0;
}