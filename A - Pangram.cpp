#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    char c;
    char arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> c;
        arr[i] = tolower(c);
    }
    sort(arr,arr+n);
    for(int i = 0; i<n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    if(cnt==26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
