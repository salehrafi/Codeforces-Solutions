#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[3];
    cin >> ch[0] >> ch[1] >> ch[2];
    sort(ch,ch+3);
    if((ch[0] == ch[1])&&(ch[1]==ch[2])){
        cout << "-1" <<endl;
    }else if(ch[0]==ch[1]){
        cout << ch[2] <<endl;
    }else if(ch[1]==ch[2]){
        cout << ch[0] <<endl;
    }else if((ch[0]!=ch[1])&&(ch[1]!=ch[2])&&(ch[0]!=ch[2])){
        cout << ch[0] <<endl;
    }

}
