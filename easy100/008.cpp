#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n = stoi(a + b);

    for (int i = 1; i <= 100 * 100; i++) {
        if (n == (i * i)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}