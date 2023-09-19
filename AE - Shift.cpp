#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin >> n >> a;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>  arr[i];
    }
    for(int i=a; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    if(n<a)
    {
        for(int i = 0; i<n; i++)
        {
            cout << "0 ";
        }
    }
    else
    {
        for(int i = 0; i<a; i++)
        {
            cout << "0 ";
        }
    }

}
