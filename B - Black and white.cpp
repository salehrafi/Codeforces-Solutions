#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    int cnt = 0;
    for(int x = 0; x < n ; x++)
    {
        cin >> str;
        for(int i=1; i<=str.length()-1; i++)
        {
            if(str.at(i-1) == 'N' && str.at(i) == 'N')
            {
                cnt++;
                i++;
            }
        }
    }
    cout << cnt << endl;
}
