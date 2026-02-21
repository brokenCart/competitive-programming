#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long longest_rep = 1;
    long long cur_rep = 1;
    char prev = s[0];
    for (int i=1, n=s.size(); i<n; i++) {
        if (prev != s[i]) {
            cur_rep = 1;
            prev = s[i];
        } else {
            cur_rep++;
            if (cur_rep > longest_rep) {
                longest_rep = cur_rep;
            }
        }
    }
    cout << longest_rep << "\n";
    return 0;
}