#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    for(int i=0; i<d; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int cnt = 1;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
        {
            cnt = cnt*arr[i];
        }
        cout << (arr[0]+1)*cnt << endl;
    }
    return 0;
}
