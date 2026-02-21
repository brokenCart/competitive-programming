#include <bits/stdc++.h>
using namespace std;

const long long m = 1e9+7;

int main() {
    int n;
    cin >> n;
    long long x = 1;
    while (n--) {
        x = ((x%m)*2)%m;
    }
    cout << x << "\n";
    return 0;
}