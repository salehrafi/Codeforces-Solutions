#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x,y;
        cin >> x >> y;
        cout << __gcd(x,y) << endl;
    }
    return 0;
}
