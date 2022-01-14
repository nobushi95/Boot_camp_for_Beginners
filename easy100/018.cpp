#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string S;
    cin >> S;

    int max = 0;
    for (int l = 0; l < S.size() ; l++) {
        for (int r = l; r < S.size(); r++) {
            bool isPartial = true;
            for (int i = l; i <= r; i++) {
                if (!((S[i] == 'A') ||
                    (S[i] == 'C') ||
                    (S[i] == 'G') ||
                    (S[i] == 'T'))) {
                    isPartial = false;
                    break;
                }
            }
            if (isPartial) {
                int size = r - l + 1;
                if (max < size) max = size;
            }
        }
    }

    cout << max << endl;

    return 0;
}