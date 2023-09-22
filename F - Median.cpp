#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int b = arr[1];
    sort(arr,arr+3);
    if(arr[1] != b){
        cout << "No" <<endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}
