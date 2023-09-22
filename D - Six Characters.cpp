#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    cout << x;
    int n = 0;
    int t = x.length();
    for(int i=t; i<6; i++)
    {

        cout << x.at(n);
        n++;
        if(n>=x.length())
        {
            n = 0;
        }

    }
    return 0;
}
