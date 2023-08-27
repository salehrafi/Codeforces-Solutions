#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p, t, cnt = 0, s = 0;
    cin >> p >> t;
    for(int i=1; i<=p; i++)
    {
        cnt  = cnt +(5 * i);
        if((t+cnt)<=240)
        {
            s++;
        }
    }
    cout << s << endl;
    return 0;
}
