#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        if(str.at(i) == '.'){
            cout << "0";
        }
        else if(str.at(i)=='-' && str.at(i+1) == '.')
        {
            i++;
            cout << "1";
        }
        else if(str.at(i) == '-' && str.at(i+1) == '-')
        {
            i++;
            cout << "2";
        }
    }
    return 0;
}
