#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int cnt = 1;
    int x;
    while(true){
        x = (a*cnt)%10;
        if(x==b || x == 0){
            cout << cnt << endl;
            return 0;
        }else{
            cnt++;
        }
    }
}
