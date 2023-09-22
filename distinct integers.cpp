#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5],cnt=1;
    cin >> arr[0] >> arr[1]>> arr[2]>> arr[3]>> arr[4];

    sort(arr,arr+5);
    for(int i=1; i<=5-1; i++)
    {
        if(arr[i-1] != arr[i])
        {
            cnt++;
            //cout << " mod" << arr[i] <<endl;
        }
    }
    cout << cnt <<endl;


}
