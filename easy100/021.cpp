#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int X;
    cin >> X;

    int now = X;
    while (true) {
        bool is_prime = true;
        for (int i = 2; i < now; i++) {
            if (now % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) break;
        now++;
    }

    cout << now << endl;

    return 0;
}