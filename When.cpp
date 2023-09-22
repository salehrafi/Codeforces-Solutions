#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=21,b=00;
    if(n>59)
    {
        a += n/60;
        b += (n%60);

    }
    else
    {
        b = n;
    }
    cout << a << ":";
    if(b>10)
    {
        cout << b << endl;
    }
    else
    {
        cout << "0" << b << endl;
    }
    return 0;
}
