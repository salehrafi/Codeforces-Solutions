#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    fflush(stdin);
    int i,n = str.length();
    char arr[n/2];
    int len = 0;
    int x = 0;

    for(i=0;i<n;i++){
        if(str.at(i)>= 'a' && str.at(i)<= 'z')
        {
            arr[x] = str.at(i);
            len++;
            x++;
        }
    }
    int cnt = 0;
    sort(arr,arr+len);
    for(i=0;i<len;i++){
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;

}
