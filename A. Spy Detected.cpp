#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        int arr[x];
        for(int i=0; i<x; i++)
        {
            cin >> arr[i];
        }
        int cnt = arr[0];
        int f = 1;
        for(int i=1; i<=x-1; i++)
        {
            if(arr[i-1] == arr[i])
            {
                cnt = arr[i];
                break;
            }
        }
        for(int i=1; i<=x-1; i++)
        {
            if(cnt != arr[i])
            {
                f = i + 1;
                break;
            }
        }
        cout << f << endl;
    }
    return 0;
}
