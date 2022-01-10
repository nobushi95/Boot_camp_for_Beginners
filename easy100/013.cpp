#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && A == C) {
        if (A % 2 == 0) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    int count = 0;
    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int ha = A / 2;
        int hb = B / 2;
        int hc = C / 2;
        A = hb + hc;
        B = ha + hc;
        C = ha + hb;
        count++;
    }

    cout << count << endl;

    return 0;
}