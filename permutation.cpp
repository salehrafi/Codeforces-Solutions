#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin >>  n >> a;
    int cnt = 0, x;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x == a){
            cnt = i+1;
        }
    }
    cout << cnt << endl;
}
