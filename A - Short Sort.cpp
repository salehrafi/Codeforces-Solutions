#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.length() != 3) {
            cout << "NO" << endl;
            continue;
        }

        if (s == "abc" || s == "acb" || s == "bac" || s == "cba") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
