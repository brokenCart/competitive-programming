#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    cin >> x;

    long long steps = 0;
    for (int i=0; i<n-1; i++) {
        long long cur_x;
        cin >> cur_x;
        if (cur_x < x) {
            steps += x - cur_x;
        } else {
            x = cur_x;
        }
    }
    cout << steps << "\n";
    return 0;
}