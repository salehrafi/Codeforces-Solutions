#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[3];
    for(int i=0;i<n;i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        if((arr[0]+arr[1]) == arr[2])
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
