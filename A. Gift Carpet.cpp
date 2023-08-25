#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n,m;
    int x = 0;
    cin >> n >> m;
    string ch[m];
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            cin >> ch[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ch[j].at(j)=='v')
            {
                x = j;
            }

        if(ch[i].at(x)=='i')
        {
            if(ch[i].at(x)=='k')
            if(ch[i].at(x)=='a'){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
    }

}
}

