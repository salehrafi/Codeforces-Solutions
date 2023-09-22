#include<iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int cnt = 0;
    char str[a];
    for(int j = 0; j<n; j++)
    {
       cin >>  str;
       for(int i=0;i<a;i++){
        if(str[i] != '.'){
            cnt++;
        }
       }
    }
    cout << cnt << endl;
}
