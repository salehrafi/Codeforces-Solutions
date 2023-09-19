#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s.at(i) == 'v'){
            cnt++;
        }
        else{
            cnt = cnt+2;
        }
    }
    cout << cnt << endl;
}
