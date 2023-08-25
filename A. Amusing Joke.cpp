#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, fstr;
    int x = 0, cnt = 0, y = 0;
    cin >> str1 >> str2 >> fstr;
    for(int i=0;i<(str1.length() + str2.length()) ;i++)
    {
        if(str1.at(x) == fstr.at(i))
        {
            x++;
            cnt++;
        }
        if(str2.at(y) == fstr.at(i))
        {
            x++;
            cnt++;
        }
    }
    if(cnt == fstr.length()){
            cout << "YES";
        }
    else{
        cout << "NO";
    }


    return 0;
}
