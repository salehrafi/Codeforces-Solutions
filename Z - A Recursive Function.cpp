#include<bits/stdc++.h>
using namespace std;

int main()
{
    //f(0) = 1;
    //n*f(n-1);
    int n,x = 0;
    cin >> n;
    if(n == 0){
        x = 1;
    }
    else if((n-1)==0){
        x = n*1;
    }else{
        x = n*(n-1);
    }
    cout << x;

    return 0;
}
