#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int cnt = 0;
    for(int i=0;i<n;i++){
      string str;
      cin >> str;
      if(str == "Tetrahedron") {
        cnt = cnt + 4;
      }else if(str == "Cube"){
        cnt = cnt + 6;
      }else if(str == "Octahedron"){
        cnt = cnt + 8;
      }else if(str == "Dodecahedron"){
        cnt = cnt + 12;
      }else if(str == "Icosahedron"){
        cnt = cnt + 20;
      }
    }
    cout << cnt << endl;
}
