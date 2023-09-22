#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int f;
    cin >> f;
    for(int i=0; i<f; i++)
    {
        cin >> str;
        int cnt = 0;
        int cnt2 = 0;
        int n = str.length();
        if(n==3)
        {
            for(int i=0; i<n; i++)
            {
                if(str.at(i) == 'o' ||str.at(i) == 'n' ||str.at(i) == 'e')
                {
                    cnt++;
                }
            }

            for(int i=0; i<n; i++)
            {
                if(str.at(i) == 't' ||str.at(i) == 'w' ||str.at(i) == 'o')
                {
                    cnt2++;
                }
            }

            if(cnt>=2)
            {
                cout << "1" << endl;
            }
            else if(cnt2>=2)
            {
                cout << "2" <<endl;
            }
        }
        else
        {
            cout << "3" <<endl;
        }
    }
}
