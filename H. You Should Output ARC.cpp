#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int p,q,r,s;
    cin >> p >> q;
    cin >> r >> s;
    if(a == 1 && b==1)
    {
        cout << p <<endl;
    }
    else if(a==1&&b==2)
    {
        cout<< q <<endl;
    }
    else if(a == 2 && b == 1)
    {
        cout<< r <<endl;
    }
    else if(a == 2 && b == 2)
    {
        cout << s <<endl;
    }

    return 0;
}
