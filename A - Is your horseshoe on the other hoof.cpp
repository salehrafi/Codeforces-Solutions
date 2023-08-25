#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[4];
    int cnt = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr,arr+4);
    for(int i=0;i<4;i++)
    {
        if(arr[i-1] == arr[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
