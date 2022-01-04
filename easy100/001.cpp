#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int sum = 1;
    int count = 0;
    for (;;) {
        if (sum >= B) break;
        sum +=  A - 1;
        count++;
    }

    cout << count << endl;

    return 0;
}