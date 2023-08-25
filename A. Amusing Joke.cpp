#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string ch1, ch2, ch3, s;
    cin >> ch1 >> ch2 >> ch3;
    s = ch1 + ch2;
    sort(ch3.begin(), ch3.end());
    sort(s.begin(), s.end());
    if(s == ch3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
