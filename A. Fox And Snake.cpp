#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    for (int i=0; i<n; i++)
    {
        if (i%2 == 0)
        {
            for (int j=0; j<l; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if ((i / 2) % 2 == 0)
            {
                for (int j = 1; j < l; j++)
                {
                    cout << ".";
                }cout << "#";
            }
            else
            {
                 cout << "#";
                for (int j=0; j<l-1; j++)
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
