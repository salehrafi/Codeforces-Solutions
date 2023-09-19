#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int big = 0, t = 0;
    for(int i=0;i<n;i++){
        if(big < arr[i]){
            big = arr[i];
            t = i+1;
        }
    }
    cout << t;
}
