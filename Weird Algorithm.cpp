#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long cnt=0;
    cin >> n;
    cout << n << " ";
    while(1)
    {
        if(n>1)
        {
            if((n%2)==0)
            {
                cnt = (n/2);
                cout << cnt << " ";
                n = cnt;
            }
            else
            {
                cnt = (n*3)+1;
                cout << cnt << " ";
                n = cnt;
            }
        }
        else break;
    }

    return 0;
}
