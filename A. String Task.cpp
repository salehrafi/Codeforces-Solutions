#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length(), x = 0;
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        if (str.at(i) != 'a' && str.at(i) != 'A' && str.at(i) != 'e' && str.at(i) != 'E' && str.at(i) != 'i' && str.at(i) != 'I' && str.at(i) != 'o' && str.at(i) != 'O' && str.at(i) != 'u' && str.at(i) != 'U' && str.at(i) != 'y' && str.at(i) != 'Y')
        {
            char c = tolower(str.at(i));
            arr[x] = c;
            x++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout << '.' << arr[i];
    }

    return 0;
}
