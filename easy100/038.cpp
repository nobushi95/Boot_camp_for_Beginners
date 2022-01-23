#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    // int A, B, C, D, E;
    // cin >> A >> B >> C >> D >> E;
    vector<int> times(5);
    for (auto &time : times) cin >> time;
    sort(times.begin(), times.end());

    int min = INT_MAX;
    do {
        int take_time = 0;

        for (auto time : times) {
            take_time += (take_time % 10 == 0) ? 0 : (10 - take_time % 10);
            take_time += time;
        }
        
        if (min > take_time) min = take_time;
    } while (next_permutation(times.begin(), times.end()));

    cout << min << endl;

    return 0;
}