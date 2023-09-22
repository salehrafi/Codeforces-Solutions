#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = str.length()-2; i<str.length() ; i++){
        cout << str.at(i);
    }
    return 0;
}
