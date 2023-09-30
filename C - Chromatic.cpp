#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long cnt = 0; // Use long long for total red paint
    long long c = 0;   // Use long long for total blue paint
    cin >> n;
    long long red[n];
    long long blue[n];

    // Input the amounts of red and blue paint
    for (int i = 0; i < n; i++) {
        cin >> red[i];
        cin >> blue[i];
    }

    // Sort the arrays
    sort(red, red + n);
    sort(blue, blue + n);

    // Calculate the total amounts of red and blue paint
    for (int i = 0; i < n; i++) {
        cnt += red[i];
        c += blue[i];
    }

    // Output the minimum difference
    cout << abs(cnt - c) << endl; // Use abs to ensure a positive result

    return 0;
}
