#include<bits/stdc++.h>
using namespace std;

int main(){
   string str = "atcoder";
   int n = str.length();
   int a,b;
   cin >> a >> b;
   for(int i=a-1;i<=b-1;i++){
    cout<< str.at(i);
   }
}
