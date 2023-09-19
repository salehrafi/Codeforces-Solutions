#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int arr[x];
        for(int j=0;j<x;j++){
            cin >> arr[j];
        }
        sort(arr, arr+x);
        for(int k=1;k<=x;k++){
            if((arr[k-1]-arr[k]) == arr[k+1]){
                cout << "YES" << endl;
                break;
            }
            else{
                cout << "NO" << endl;
                break;
            }
        }
    }
}
