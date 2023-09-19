#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(str.at(i) == 'a')
        {
            cnt = i+1;
        }
    }
    if(cnt == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << cnt << endl;
    }
    return 0;
}
